# -*- coding: utf-8 -*-
"""
Created on Tue Jan 11 10:12:12 2022

@author: Aftab Mallick
"""
##Ass 10 C
file1=open("text3.txt","w")


nterms = int(input(" fibonacci no upto? "))

n1, n2 = 0, 1
count = 0

if nterms <= 0:
   print("Please enter a positive integer")
# if there is only one term, return n1
elif nterms == 1:
   z="Fibonacci sequence upto",nterms,":"
   file1.write(z)
   file1.write(str(n1))
# generate fibonacci sequence
else:
   x="Fibonacci sequence:"
   file1.write(x)
   while count < nterms-1:
      
       file1.write(str(n1)+"\n")
       nth = n1 + n2
       # update values
       n1 = n2
       n2 = nth
       count += 1
       
file1.close()
