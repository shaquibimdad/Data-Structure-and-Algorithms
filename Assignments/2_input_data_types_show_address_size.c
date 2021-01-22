#include <stdio.h>
int main()
{
    int a;
    float b;
    char c;
    double d;

    printf("\nEnter the value of (integer) a:");
    scanf("%d", &a);
    printf("\nEnter the value of (float) b:");
    scanf("%f", &b);
    printf("\nEnter the value of (character) c:");
    scanf(" %c", &c);
    printf("\nEnter the value of (double) d:");
    scanf("%lf", &d);

    printf("\nValue:a = %d, b = %f, c = %c, d = %lf", a,b,c,d);
    printf("\nAddress of:a = %u, b = %u, c = %u, d = %u", &a,&b,&c,&d);
    printf("\nSize of:a = %d, b = %d, c = %d, d = %d\n", sizeof(a),sizeof (b),sizeof(c),sizeof (d) );

    return 0;
}
