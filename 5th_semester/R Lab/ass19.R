plot(pressure)
survey<-c(apple=40,kiwi=15,grapes=30,banana=50,pear=20,orange=35)
pie(survey,col=rainbow(length(survey)))
barplot(survey,col='blue')