#include <stdio.h>
int main(){

    int a,b;
    printf("Enter first number:");
    scanf("%d",&a);
    
    printf("Enter second number:");
    scanf("%d",&b);
    
    printf("\nBefore Swapping a=%d, b=%d\n", a,b);

    a+=b;
    b=a-b;
    a-=b;

    printf("\nAfter Swapping a=%d, b=%d\n", a,b);
}
