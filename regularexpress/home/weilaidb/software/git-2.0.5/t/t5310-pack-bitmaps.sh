#!/bin/sh
test_description='exercise basic bitmap functionality'
. ./test-lib.sh
objpath ()
test_expect_success 'setup repo with moderate-sized history' '
for i in $(test_seq 1 10); do
test_commit $i
done &&
git checkout -b other HEAD~5 &&
for i in $(test_seq 1 10); do
test_commit side-$i
done &&
git checkout master &&
blob=$(echo tagged-blob | git hash-object -w --stdin) &&
git tag tagged-blob $blob &&
git config pack.writebitmaps true &&
git config pack.writebitmaphashcache true
'
test_expect_success 'full repack creates bitmaps' '
git repack -ad &&
ls .git/objects/pack/ | grep bitmap >output &&
test_line_count = 1 output
'
test_expect_success 'rev-list --test-bitmap verifies bitmaps' '
git rev-list --test-bitmap HEAD
'
rev_list_tests()
rev_list_tests 'full bitmap'
test_expect_success 'clone from bitmapped repository' '
git clone --no-local --bare . clone.git &&
git rev-parse HEAD >expect &&
git --git-dir=clone.git rev-parse HEAD >actual &&
test_cmp expect actual
'
test_expect_success 'setup further non-bitmapped commits' '
for i in $(test_seq 1 10); do
test_commit further-$i
done
'
rev_list_tests 'partial bitmap'
test_expect_success 'fetch (partial bitmap)' '
git --git-dir=clone.git fetch origin master:master &&
git rev-parse HEAD >expect &&
git --git-dir=clone.git rev-parse HEAD >actual &&
test_cmp expect actual
'
test_expect_success 'incremental repack cannot create bitmaps' '
test_commit more-1 &&
find .git/objects/pack -name "*.bitmap" >expect &&
git repack -d &&
find .git/objects/pack -name "*.bitmap" >actual &&
test_cmp expect actual
'
test_expect_success 'incremental repack can disable bitmaps' '
test_commit more-2 &&
git repack -d --no-write-bitmap-index
'
test_expect_success 'full repack, reusing previous bitmaps' '
git repack -ad &&
ls .git/objects/pack/ | grep bitmap >output &&
test_line_count = 1 output
'
test_expect_success 'fetch (full bitmap)' '
git --git-dir=clone.git fetch origin master:master &&
git rev-parse HEAD >expect &&
git --git-dir=clone.git rev-parse HEAD >actual &&
test_cmp expect actual
'
test_expect_success 'create objects for missing-HAVE tests' '
blob=$(echo "missing have" | git hash-object -w --stdin) &&
tree=$(printf "100644 blob $blob\tfile\n" | git mktree) &&
parent=$(echo parent | git commit-tree $tree) &&
commit=$(echo commit | git commit-tree $tree -p $parent) &&
cat >revs <<-EOF
HEAD
^HEAD^
^$commit
EOF
'
test_expect_success 'pack with missing blob' '
rm $(objpath $blob) &&
git pack-objects --stdout --revs <revs >/dev/null
'
test_expect_success 'pack with missing tree' '
rm $(objpath $tree) &&
git pack-objects --stdout --revs <revs >/dev/null
'
test_expect_success 'pack with missing parent' '
rm $(objpath $parent) &&
git pack-objects --stdout --revs <revs >/dev/null
'
test_lazy_prereq JGIT '
type jgit
'
test_expect_success JGIT 'we can read jgit bitmaps' '
git clone . compat-jgit &&
(
cd compat-jgit &&
rm -f .git/objects/pack/*.bitmap &&
jgit gc &&
git rev-list --test-bitmap HEAD
)
'
test_expect_success JGIT 'jgit can read our bitmaps' '
git clone . compat-us &&
(
cd compat-us &&
git repack -adb &&
# jgit gc will barf if it does not like our bitmaps
jgit gc
)
'
test_done
