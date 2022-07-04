while [[ 1 > 0 ]];
do
echo "Enter the choice"
echo "1.Addition"
echo "2.Subtraction"
echo "3.Multiplication"
echo "4.Division"
read ch
case $ch in
1)echo "Enter two numbers"
read a b
c=$(($a+$b))
echo "Sum is $c"
;;
2)echo "Enter two numbers"
read a b
c=$(($a-$b))
echo "Difference is $c"
;;
3)echo "Enter two numbers"
read a b
c=$(($a*$b))
echo "Product is $c"
;;
4)echo "Enter two numbers"
read a b
c=$(($a/$b))
echo "Quotient is $c"
;;
*)echo "Invalid choice"
;;
esac
done