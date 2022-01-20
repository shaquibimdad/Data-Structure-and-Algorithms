print("Enter 3 numbers: ")
a=eval(input())
b=eval(input())
c=eval(input())
if a>b and a>c:
    print("{} is maximum".format(a))
elif b>a and b>c:
    print("{} is maximum".format(b))
else:
    print("{} is maximum".format(c))