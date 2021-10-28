# Implementation of Calculator application

#!bin/bash

j=1

while [ $j -eq 1 ]

do

echo "Enter the First Operand;"

read f1

echo "Enter the second operand:"

read f2

echo "1 -> Addition"

echo "2 -> Subtraction"

echo "3 -> Multiplication"

echo "4 -> Division" 
echo "Enter your choice"
read n

case "$n" in

1)

echo "Addition"

f3=$((f1+f2))

echo "The result is:$f3"

;;

2)

echo "Subtraction"

let "f4=$f1 - $f2"

echo "The result is:$f4"

;;

3)

echo "Multiplication"

let "f5=$f1 * $f2"

echo "The result is:$f5"

;;

4)

echo "Division"

let "f6=$f1 / $f2"

echo "The result is:$f6"

;;

esac

echo "Do you want to continue(press:1 otherwise press any key to quit)"

read j

done
