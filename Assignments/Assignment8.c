
#include <stdio.h>

int main(){
    int x,y;
    char ch;

    printf("\nEnter 1st Number: ");
    scanf("%d",&x);

    printf("\nEnter 2nd Number: ");
    scanf("%d",&y);

    printf("Press \'+\' for addition\n");
    printf("Press \'-\' for subtraction\n");
    printf("Press \'*\' for multiplication\n");
    printf("Press \'/\' for divison\n: ");

    scanf(" %c",&ch);
    switch(ch){
        case '+':
            printf("\n%d + %d = %d\n",x,y,x+y);
            break;
        case '-':
            printf("\n%d - %d = %d\n",x,y,x-y);
            break;
        case '*':
            printf("\n%d * %d = %d\n",x,y,x*y);
            break;
        case '/':
            if(y==0) printf("\nDivison by zero is not possible\n");
            else printf("\n%d / %d = %0.02f\n",x,y,x/(y*1.0));
            break;

        default:
            printf("INVALID OPTION!\n");
    }
    return 0;
}