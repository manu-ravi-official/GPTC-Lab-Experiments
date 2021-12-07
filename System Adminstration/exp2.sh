#!/bin/bash

echo "Enter the name of the destination file : "

read dest

echo "Enter the name of the 1st source file : "

read src1

echo "Enter the name of the 2nd source file : "

read src2

cat $src1 $src2 > $dest status=$?

if [ $status –eq ] ; then

echo "File Copied Successfully"

else

echo "Problem copying file"

fi
