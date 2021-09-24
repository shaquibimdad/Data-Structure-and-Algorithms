print("Enter the year to check:")
year=eval(input())
if year%400==0 or year%100!=0 and year%4==0:
        print("{year} is a leap year".format())
else:
        print("{year}is not a leap year".format())
