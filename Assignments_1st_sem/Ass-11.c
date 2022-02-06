#include <stdio.h>
int main(){

    int n,flag=1;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i=2; i<n; i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }

    if(flag) printf("\n%d is a prime Number\n",n);
    else printf("\n%d is not a Prime Number\n",n);

    return 0;
}