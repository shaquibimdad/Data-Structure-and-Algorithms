#check given number is prime or not

#!/bin/bash
echo "Enter the number"
read n
for ((i=2;i<n;i++)) #start from 2 because 1 is not prime
do
   if [ $((n%i)) -eq 0 ]#if number is divisible by any number other than 1 and itself
   then
       echo "$n is not a prime number" 
       exit
   fi
done
echo "$n is a prime number"
