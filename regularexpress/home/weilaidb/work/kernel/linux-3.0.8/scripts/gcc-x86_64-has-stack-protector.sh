#!/bin/sh
echo "int foo(void) " | $* -S -xc -c -O0 -mcmodel=kernel -fstack-protector - -o - 2> /dev/null | grep -q "%gs"
if [ "$?" -eq "0" ] ; then
echo y
else
echo n
fi
