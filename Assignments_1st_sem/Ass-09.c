#include <stdio.h>
#include <math.h>

int main(){
    int x,i;
    int y = 0;

    printf("Enter Value for X: ");
    scanf("%d", &x);

    for(i=1; i<=5; i++){
        y+=(int)(pow(x,i));
    }

    printf("Y = %d\n", y);

    return 0;
}