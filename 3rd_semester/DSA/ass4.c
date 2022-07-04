#include <stdio.h>
void fido(int b, int c, int n)
{
    if (n >= 1)
    {
        printf("\t%d", b);
        fido(c, b + c, n - 1);
    }
}
int main()
{
    int a;
    printf("\n Enter the No of term : ");
    scanf("%d", &a);
    fido(0, 1, a);
    return 0;
}