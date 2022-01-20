year=int(input("Enter the year"))
if year%400==0 or year%100!=0 and year%4==0:
        print("leap year".format())
else:
        print("not a leap year".format())
