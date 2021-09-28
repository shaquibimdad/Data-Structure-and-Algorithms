print("Enter the unit consume:")
unit=int(input())
if(unit<=200):
    rate=unit*0.50
if unit>200 and unit<=400:
    rate=unit*0.65+100
if unit>400 and unit<=600:
    rate=unit*0.80+200
if unit>600:
    rate=unit*1.00+300
print("Rate is",rate)