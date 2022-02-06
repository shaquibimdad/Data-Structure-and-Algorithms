#include<stdio.h>

int main(){
  int arr[100],k,i,n,mid=0,u,l;
  printf("Enter the no of element you want in array-");
  scanf("%d",&n);
  printf("Enter the array elment-\n");
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
//binary searching
  printf("Enter the keyword you want to search-");
  scanf("%d",&k);
  l=0;
  u=n-1;
  while(l<=u){
    mid=(l+u)/2;
    if (arr[mid]<k)  
      l=mid+1;
    else if(arr[mid]==k){
      printf("The no is found at %d",mid+1);
      break;
      }
    else{
      l=mid-1;
    }
  }
  if(l>u){
    printf("The number is not found");
  }
return 0;
}