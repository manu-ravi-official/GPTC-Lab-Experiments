sum=0
i="y"
echo " Enter first no."
read n1
echo "Enter second no."
read n2
while [ $i = "y" ]
do
echo "1.Addition"
echo "2.Subtraction"
echo "3.Multiplication"
echo "4.Division"
echo "Enter your choice"
read ch
case $ch in
1)sum=`expr $n1 + $n2`
 echo "Sum = "$sum;;
 2)sum=`expr $n1 - $n2`
 echo "Difference = "$sum;;
 3)sum=`expr $n1 \* $n2`
 echo "Product = "$sum;;
 4)
 quo=`expr $n1 \/ $n2`
 r=`expr $n1 \% $n2`
 dec=` expr $r \*  1000  \/ $n2 `

 echo "Quotient = $quo . $dec";;
 *)echo "Invalid choice";;
esac
echo "Do u want to continue ?"
read i
if [ $i != "y" ]
then
 exit
fi
done
