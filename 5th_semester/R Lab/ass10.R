m<-matrix(c(1,2,3,2,4,5,3,5,6),nrow=3,ncol=3,byrow=TRUE)
n<-matrix(c(1,2,3,-2,5,6,-3,-6,8),nrow=3,ncol=3,byrow=TRUE)
o<-matrix(c(-1,0,0,1),nrow=2,ncol=2,byrow=TRUE)
input<-as.integer(readline("1.Symmetric Matrix 2.Skew-Symmetric Matrix 3.Orthogonal Matrix"))
switch(input,is.symmetric(m),is.skewsymmetric(n),is.orthogonal(o))

