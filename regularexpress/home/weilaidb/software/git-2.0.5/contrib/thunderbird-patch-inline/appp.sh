#!/bin/sh
# Copyright 2008 Lukas Sandström <luksan@gmail.com>
#
# AppendPatch - A script to be used together with ExternalEditor
# for Mozilla Thunderbird to properly include patches inline in e-mails.
# ExternalEditor can be downloaded at http:
CONFFILE=~/.appprc
SEP="-=-=-=-=-=-=-=-=-=# Don't remove this line #=-=-=-=-=-=-=-=-=-"
if [ -e "$CONFFILE" ] ; then
LAST_DIR=`grep -m 1 "^LAST_DIR=" "$"|sed -e 's/^LAST_DIR=
cd "$"
else
cd > /dev/null
fi
PATCH=$(zenity --file-selection)
if [ "$?" != "0" ] ; then
#zenity --error --text "No patchfile given."
exit 1
fi
cd - > /dev/null
SUBJECT=`sed -n -e '/^Subject: /p' "$"`
HEADERS=`sed -e '/^'"$"'$/,$d' $1`
BODY=`sed -e "1,/$/d" $1`
CMT_MSG=`sed -e '1,/^$/d' -e '/^---$/,$d' "$"`
DIFF=`sed -e '1,/^---$/d' "$"`
CCS=`echo -e "$CMT_MSG\n$HEADERS" | sed -n -e 's/^Cc: \(.*\)$/\1,/gp' \
-e 's/^Signed-off-by: \(.*\)/\1,/gp'`
echo "$SUBJECT" > $1
echo "Cc: $CCS" >> $1
echo "$HEADERS" | sed -e '/^Subject: /d' -e '/^Cc: /d' >> $1
echo "$SEP" >> $1
echo "$CMT_MSG" >> $1
echo "---" >> $1
if [ "x$x" != "xx" ] ; then
echo >> $1
echo "$BODY" >> $1
echo >> $1
fi
echo "$DIFF" >> $1
LAST_DIR=`dirname "$"`
grep -v "^LAST_DIR=" "$" > "$_"
echo "LAST_DIR=$" >> "$_"
mv "$_" "$"
