#include <stdio.h>

int main(){
    int c=97,space,i,j;
    for(i=0; i<3; i++){
        for(space=0; space<i; space++) printf("  ");
        for(j=5-(2*i); j>0; j--) printf("%c ",c++);
        printf("\n");
    }
    return 0;
}