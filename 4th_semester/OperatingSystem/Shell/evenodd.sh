#print even or odd among two numbers
#!/bin/bash
echo "Enter two numbers"
read a b
if [ $((a%2)) -eq 0 ]
then
    echo "$a is even"
else
    echo "$a is odd"
fi
if [ $((b%2)) -eq 0 ]
then
    echo "$b is even"
else
    echo "$b is odd"
fi
