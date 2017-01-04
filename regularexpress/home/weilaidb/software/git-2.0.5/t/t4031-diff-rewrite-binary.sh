#!/bin/sh
test_description='rewrite diff on binary file'
. ./test-lib.sh
# We must be large enough to meet the MINIMUM_BREAK_SIZE
# requirement.
make_file()
test_expect_success 'create binary file with changes' '
make_file "\\0" &&
git add file &&
make_file "\\01"
'
test_expect_success 'vanilla diff is binary' '
git diff >diff &&
grep "Binary files a/file and b/file differ" diff
'
test_expect_success 'rewrite diff is binary' '
git diff -B >diff &&
grep "dissimilarity index" diff &&
grep "Binary files a/file and b/file differ" diff
'
test_expect_success 'rewrite diff can show binary patch' '
git diff -B --binary >diff &&
grep "dissimilarity index" diff &&
grep "GIT binary patch" diff
'
test_expect_success 'rewrite diff --numstat shows binary changes' '
git diff -B --numstat --summary >diff &&
grep -e "-	-	" diff &&
grep " rewrite file" diff
'
test_expect_success 'diff --stat counts binary rewrite as 0 lines' '
git diff -B --stat --summary >diff &&
grep "Bin" diff &&
test_i18ngrep "0 insertions.*0 deletions" diff &&
grep " rewrite file" diff
'
>dump
chmod +x dump
test_expect_success 'setup textconv' '
echo file diff=foo >.gitattributes &&
git config diff.foo.textconv "\"$(pwd)\""/dump
'
test_expect_success 'rewrite diff respects textconv' '
git diff -B >diff &&
grep "dissimilarity index" diff &&
grep "^-61" diff &&
grep "^-0" diff
'
test_done
