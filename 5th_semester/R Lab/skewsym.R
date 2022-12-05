
n<-matrix(c(1,2,3,-2,5,6,-3,-6,8),nrow=3,ncol=3,byrow=TRUE)
is.skewsymmetric<-function(n)
{
  f= 0
  for(i in 1:nrow(n)){
    for(j in 1:ncol(n)){
      if(i!=j){
        if(n[i,j] == -n[j,i]){
          f=1
        }else
        {
          f=0
          break
        }
      }
    }
  }
  if(f==1)
    print("Skew-Symmetric")
  else
    print("Not Skew-Symmetric")
}

