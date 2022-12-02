f<-function(x,m,sig)
{
  return(exp(-(x-m)^2/(2*sig^2))/(sig*sqrt(2*3.14)))
}
l<-as.double(readline("enter lower limit:"))
u<-as.double(readline("enter upper limit:"))
m<-as.double(readline("enter mean:"))
sig<-as.double(readline("enter sd:"))
n<-as.integer(readline("enter sub-intervals:"))
h=(u-l)/n
s=0.0
for(i in 0:n){
  s=s+f(l+(i+0)*h,m,sig)+f(l+(i+1)*h,m,sig)
}
s=s*(h/2)
print(s)
x=seq(from=1,to=u,by=h)
y=dnorm(x,m,sig)
plot(x,y,main="Normal-Distribution Curve",xlab = "Distribution",ylab = "Y",col="blue")