#include <stdio.h>

int main(){
    int space = 2,i,j;

    for(i=0; i<3; i++){
        for(j=2; j>i; j--) printf(" ");
        for(j=0; j<=(2*i); j++) printf("*");
        printf("\n");
    }
    return 0;
}