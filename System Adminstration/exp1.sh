clear
echo "Enter values for n"
read N
echo "..."
while [ $N -gt 0 ]
do
echo $N
N=`expr $N - 1`
done
