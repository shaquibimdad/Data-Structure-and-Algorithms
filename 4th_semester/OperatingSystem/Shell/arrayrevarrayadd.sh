#!/bin/bash
echo "Enter the number of elements"
read n
echo "Enter the elements"
for ((i=0;i<n;i++))
do
    read a[$i]
done
echo "Array is"
for ((i=0;i<n;i++))
do
    echo ${a[$i]}
done
echo "Reversed array is"
for ((i=n-1;i>=0;i--))
do
    echo ${a[$i]}
done
echo "Sum of array is"
sum=0
for ((i=0;i<n;i++))
do
    sum=$((sum+a[$i]))
done
echo $sum