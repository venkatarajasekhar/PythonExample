#!/bin/sh
# Copyright 2005, Ryan Anderson <ryan@michonline.com>
#
# This file is licensed under the GPL v2, or a later version
# at the discretion of Linus Torvalds.
USAGE='<start> <url> [<end>]'
LONG_USAGE='Summarizes the changes between two commits to the standard output,
and includes the given URL in the generated summary.'
SUBDIRECTORY_OK='Yes'
OPTIONS_KEEPDASHDASH=
OPTIONS_STUCKLONG=
OPTIONS_SPEC='git request-pull [options] start url [end]
--
p    show patch text as well
'
. git-sh-setup
GIT_PAGER=
export GIT_PAGER
patch=
while	case "$#" in 0) break ;; esac
do
case "$1" in
-p)
patch=-p ;;
--)
shift; break ;;
-*)
usage ;;
*)
break ;;
esac
shift
done
base=$1 url=$2 status=0
test -n "$base" && test -n "$url" || usage
baserev=$(git rev-parse --verify --quiet "$base"^0)
if test -z "$baserev"
then
die "fatal: Not a valid revision: $base"
fi
#
# $3 must be a symbolic ref, a unique ref, or
# a SHA object expression. It can also be of
# the format 'local-name:remote-name'.
#
local=$
local=$
remote=$
pretty_remote=$
pretty_remote=$
head=$(git symbolic-ref -q "$local")
head=$
head=$
# None of the above? Bad.
test -z "$head" && die "fatal: Not a valid revision: $local"
# This also verifies that the resulting head is unique:
# "git show-ref" could have shown multiple matching refs..
headrev=$(git rev-parse --verify --quiet "$head"^0)
test -z "$headrev" && die "fatal: Ambiguous revision: $local"
# Was it a branch with a description?
branch_name=$
if test "z$branch_name" = "z$headref" ||
! git config "branch.$branch_name.description" >/dev/null
then
branch_name=
fi
merge_base=$(git merge-base $baserev $headrev) ||
die "fatal: No commits in common between $base and $head"
# $head is the refname from the command line.
# If a ref with the same name as $head exists at the remote
# and their values match, use that.
#
# Otherwise find a random ref that matches $headrev.
find_matching_ref='
my ($head,$headrev) = (@ARGV);
my ($found);
while (<STDIN>)
if ($found)
'
ref=$(git ls-remote "$url" | @@PERL@@ -e "$find_matching_ref" "$" "$headrev")
if test -z "$ref"
then
echo "warn: No match for commit $headrev found at $url" >&2
echo "warn: Are you sure you pushed '$' there?" >&2
status=1
fi
# Special case: turn "for_linus" to "tags/for_linus" when it is correct
if test "$ref" = "refs/tags/$pretty_remote"
then
pretty_remote=tags/$pretty_remote
fi
url=$(git ls-remote --get-url "$url")
git show -s --format='The following changes since commit %H:
%s (%ci)
are available in the git repository at:
' $merge_base &&
echo "  $url $pretty_remote" &&
git show -s --format='
for you to fetch changes up to %H:
%s (%ci)
----------------------------------------------------------------' $headrev &&
if test $(git cat-file -t "$head") = tag
then
git cat-file tag "$head" |
sed -n -e '1,/^$/d' -e '/^-----BEGIN PGP /q' -e p
echo
echo "----------------------------------------------------------------"
fi &&
if test -n "$branch_name"
then
echo "(from the branch description for $branch_name local branch)"
echo
git config "branch.$branch_name.description"
echo "----------------------------------------------------------------"
fi &&
git shortlog ^$baserev $headrev &&
git diff -M --stat --summary $patch $merge_base..$headrev || status=1
exit $status
