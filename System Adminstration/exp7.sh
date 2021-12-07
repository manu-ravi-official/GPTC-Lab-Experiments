#/bin/bash
echo "enter the file name"
read f
if test -f $f
then echo "file"
elif test -d $f
then echo "directory"
else
echo "not"
fi
