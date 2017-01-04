#!/bin/sh
test_description='fetch/push involving alternates'
. ./test-lib.sh
count_objects ()
test_expect_success setup '
(
git init original &&
cd original &&
i=0 &&
while test $i -le 100
do
echo "$i" >count &&
git add count &&
git commit -m "$i" || exit
i=$(($i + 1))
done
) &&
(
git clone --reference=original "file:
cd one &&
echo Z >count &&
git add count &&
git commit -m Z &&
count_objects >../one.count
) &&
A=$(pwd)/original/.git/objects &&
git init receiver &&
echo "$A" >receiver/.git/objects/info/alternates &&
git init fetcher &&
echo "$A" >fetcher/.git/objects/info/alternates
'
test_expect_success 'pushing into a repository with the same alternate' '
(
cd one &&
git push ../receiver master:refs/heads/it
) &&
(
cd receiver &&
count_objects >../receiver.count
) &&
test_cmp one.count receiver.count
'
test_expect_success 'fetching from a repository with the same alternate' '
(
cd fetcher &&
git fetch ../one master:refs/heads/it &&
count_objects >../fetcher.count
) &&
test_cmp one.count fetcher.count
'
test_done
