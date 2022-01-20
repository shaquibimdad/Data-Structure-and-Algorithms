#include <stdio.h>
#include <math.h>

int main(){
    int time,rate;
    float principle,compound_interest,temp;
    printf( "Enter Principal Amount: ");
    scanf("%f",&principle);
    printf("Enter Rate: ");
    scanf("%d", &rate);
    printf("Enter Time: ");
    scanf("%d", &time);

    temp = pow((1 + (rate/100.0)),(time));
    compound_interest = temp*principle;
    printf("\nCompound Interest is Rs. %0.2f\n",compound_interest);

}
