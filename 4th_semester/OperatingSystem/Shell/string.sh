#string length number of vowels number of uppercase number of lowercase number of digits number of special characters
#!/bin/bash
echo "Enter the string"
read str
len=${#str}
echo "Length of string is $len"
vowels=0
for ((i=0;i<len;i++))
do
    if [ ${str:$i:1} = "a" ] || [ ${str:$i:1} = "e" ] || [ ${str:$i:1} = "i" ] || [ ${str:$i:1} = "o" ] || [ ${str:$i:1} = "u" ]
    then
        vowels=$((vowels+1))
    fi
done
echo "Number of vowels is $vowels"
