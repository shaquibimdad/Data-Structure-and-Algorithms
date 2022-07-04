a = eval(input("Enter the value of a:"))
b = eval(input("Enter the value of b:"))
c = eval(input("Enter the value of c:"))
d = (b**2)-4*a*c
if a == 0:
    print("Not a quadratic equation")
elif d > 0:
    r1 = (-b+d**0.5)/(2*a)
    r2 = (-b-d**0.5)/(2*a)
    print("{} and {} the real and unequal roots.".format(r1, r2))
elif d == 0:
    r1 = (-b/(2*a))
    print("{} is real and equal root.".format(r1))
else:
    d = 1*d
    i = ((d**0.5)/(2*a))
    r1 = (-b/(2*a))
    c1 = complex(r1, i)
    c2 = c1.conjugate()
    print("{} and {} are the imaginary roots.".format(c1, c2))
