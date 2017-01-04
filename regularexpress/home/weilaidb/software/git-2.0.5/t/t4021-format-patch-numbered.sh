#!/bin/sh
#
# Copyright (c) 2006 Brian C Gernhardt
#
test_description='Format-patch numbering options'
. ./test-lib.sh
test_expect_success setup '
echo A > file &&
git add file &&
git commit -m First &&
echo B >> file &&
git commit -a -m Second &&
echo C >> file &&
git commit -a -m Third
'
# Each of these gets used multiple times.
test_num_no_numbered()
test_single_no_numbered()
test_no_numbered()
test_single_numbered()
test_numbered()
test_expect_success 'single patch defaults to no numbers' '
git format-patch --stdout HEAD~1 >patch0.single &&
test_single_no_numbered patch0.single
'
test_expect_success 'multiple patch defaults to numbered' '
git format-patch --stdout HEAD~2 >patch0.multiple &&
test_numbered patch0.multiple
'
test_expect_success 'Use --numbered' '
git format-patch --numbered --stdout HEAD~1 >patch1 &&
test_single_numbered patch1
'
test_expect_success 'format.numbered = true' '
git config format.numbered true &&
git format-patch --stdout HEAD~2 >patch2 &&
test_numbered patch2
'
test_expect_success 'format.numbered && single patch' '
git format-patch --stdout HEAD^ > patch3 &&
test_single_numbered patch3
'
test_expect_success 'format.numbered && --no-numbered' '
git format-patch --no-numbered --stdout HEAD~2 >patch4 &&
test_no_numbered patch4
'
test_expect_success 'format.numbered && --keep-subject' '
git format-patch --keep-subject --stdout HEAD^ >patch4a &&
grep "^Subject: Third" patch4a
'
test_expect_success 'format.numbered = auto' '
git config format.numbered auto &&
git format-patch --stdout HEAD~2 > patch5 &&
test_numbered patch5
'
test_expect_success 'format.numbered = auto && single patch' '
git format-patch --stdout HEAD^ > patch6 &&
test_single_no_numbered patch6
'
test_expect_success 'format.numbered = auto && --no-numbered' '
git format-patch --no-numbered --stdout HEAD~2 > patch7 &&
test_no_numbered patch7
'
test_expect_success '--start-number && --numbered' '
git format-patch --start-number 3 --numbered --stdout HEAD~1 > patch8 &&
grep "^Subject: \[PATCH 3/3\]" patch8
'
test_done
