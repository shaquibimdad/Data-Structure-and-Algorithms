#include <stdio.h>
#include <math.h>

int main(){
    int n,dup,sum,digits,r;

    printf("Enter a number: ");
    scanf("%d",&n);

    sum = 0;
    digits = 0;

    dup = n;
    while(dup){
        digits++;
        dup/=10;
    }

    dup = n;
    while(dup){
        r = dup%10;
        sum+=(int)(pow(r,digits));
        dup/=10;
    }

    if(n == sum) printf("\n%d is an Armstrong Number\n",n);
    return 0;
}