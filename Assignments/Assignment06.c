#include <stdio.h>

int main(){
    int a,b,c,big,small;
    printf("Enter first  number: ");
    scanf("%d",&a);

    printf("Enter second number: ");
    scanf("%d",&b);

    printf("Enter third  number: ");
    scanf("%d",&c);

    big = a>b ? (a>c ? a:c) : (b>c ? b:c) ;
    small = a<b ? (a<c ? a:c) : (b<c? b : c);

    printf("\nMaximum Value is %d\n",big);
    printf("\nMinimum Value is %d\n",small);

    return 0;
