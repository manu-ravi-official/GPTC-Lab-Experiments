#!/bin/bash
echo " Enter a : "
read a 
echo " Enter b : "
read b 
echo " Enter c : "
read c 
echo " Enter d : "
read d 
sum=`expr $a + $b + $c + $d` 
avg=`expr $sum \/ 4`
echo " Sum = $sum"
echo " Average = $avg"
