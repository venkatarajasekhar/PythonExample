#!/bin/sh
test_description='test git rev-parse'
. ./test-lib.sh
test_rev_parse()
# label is-bare is-inside-git is-inside-work prefix git-dir
ROOT=$(pwd)
test_rev_parse toplevel false false true '' .git
cd .git || exit 1
test_rev_parse .git/ false true false '' .
cd objects || exit 1
test_rev_parse .git/objects/ false true false '' "$ROOT/.git"
cd ../.. || exit 1
mkdir -p sub/dir || exit 1
cd sub/dir || exit 1
test_rev_parse subdirectory false false true sub/dir/ "$ROOT/.git"
cd ../.. || exit 1
git config core.bare true
test_rev_parse 'core.bare = true' true false false
git config --unset core.bare
test_rev_parse 'core.bare undefined' false false true
mkdir work || exit 1
cd work || exit 1
GIT_DIR=../.git
GIT_CONFIG="$(pwd)"/../.git/config
export GIT_DIR GIT_CONFIG
git config core.bare false
test_rev_parse 'GIT_DIR=../.git, core.bare = false' false false true ''
git config core.bare true
test_rev_parse 'GIT_DIR=../.git, core.bare = true' true false false ''
git config --unset core.bare
test_rev_parse 'GIT_DIR=../.git, core.bare undefined' false false true ''
mv ../.git ../repo.git || exit 1
GIT_DIR=../repo.git
GIT_CONFIG="$(pwd)"/../repo.git/config
git config core.bare false
test_rev_parse 'GIT_DIR=../repo.git, core.bare = false' false false true ''
git config core.bare true
test_rev_parse 'GIT_DIR=../repo.git, core.bare = true' true false false ''
git config --unset core.bare
test_rev_parse 'GIT_DIR=../repo.git, core.bare undefined' false false true ''
test_done
