##Ass 10 B
c=0
file1=open("text2.txt","w")
n=int(input("Enter no of prime no: "))
for num in range(1,100):  
   if num > 1:  
       for i in range(2,num):  
           if (num % i) == 0:  
               break  
       else:  
           file1.write(str(num)+"\n") 
           c=c+1
           if(c==n):
               break
           
           
file1.close()          
