#include <stdio.h>

int main(){
    int year;
    printf("\nEnter the year: ");
    scanf("%d",&year);

    if(year>=1 && year<10000){
        if(year%4==0 && year%100!=0 || year%400==0 ){
            printf("%d is a leap year\n",year);
        }
        else{
            printf("%d is not a leap year\n",year);
        }
    }
    else{
        printf("INVALID YEAR\n");
    }
    return 0;
}