data<-read.csv(file.choose())
x<-data$Miles
y<-data$Fitness
relation<-lm(y~x)
x=as.integer(readline("enter your average miles:"))
xd<-data.frame(x)
result<-predict(relation,xd)
print(result)