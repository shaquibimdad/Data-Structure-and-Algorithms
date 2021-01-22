#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;
    double d,r,r1,r2,dis;

    printf("Enter the value of a(integer): ");
    scanf("%d",&a);
    printf("Enter the value of b(integer): ");
    scanf("%d",&b);
    printf("Enter the value of c(integer): ");
    scanf("%d",&c);

    if(a==0){
        printf("\nNot a quadratic equation\n");
    }
    else{
        d = (b*b)-(4*a*c);

        if(d<0){
            printf("\nRoots are Imaginary\n");
        }
        else if(d==0){
            r = (-b+0.0)/(2*a);
            printf("\nThe Roots are equal and the root is: %0.2f\n",r);
        }
        else{
            dis = sqrt(d);
            r1 = (-b+dis)/(2*a);
            r2 = (-b-dis)/(2*a);
            printf("\nRoots are real\n");

            printf("\n1st Root: %0.2f\n",r1);
            printf("\n2nd Root: %0.2f\n",r2);
        }

    }
    return 0;

}