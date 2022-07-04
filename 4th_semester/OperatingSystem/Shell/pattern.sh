rows=4
for ((i=1;i<rows;i++))
do
    for ((j=1;j<=rows-i;j++))
    do
        echo -n " "
    done
    for ((k=1;k<=i;k++))
    do
        echo -n "* "
    done
    echo
done