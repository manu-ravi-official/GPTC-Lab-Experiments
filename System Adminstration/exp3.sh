#!/bin/bash

if [ $# -eq 0 ] ; then

echo "$0:Error command arguments missing!"

exit 1

fi

if [ $# -eq 3 ] ; then

if [ -e $3 ] ; then

tail -n+$1 $3 | head -n$2

else

echo "$0: Error opening file $3"

exit 2

fi

else

echo "Missing arguments!"

fi

