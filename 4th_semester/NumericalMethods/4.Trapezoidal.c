#include <stdio.h>
float f(float x)
{
    return 1 / (1 + x * x);
}
int main()
{
    int i, n;
    float a, b, h, sum;
    printf("\nEnter the lower limit, a:");
    scanf("%f", &a);
    printf("\nEnter the upper limit, b:");
    scanf("%f", &b);
    printf("\nEnter the number of sub-intervals, n:");
    scanf("%d", &n);
    h = (b - a) / n;
    sum = f(a) + f(b);
    for (i = 1; i < n; i++)
    {
        sum = sum + 2 * f(a + i * h);
    }
    sum = (h * sum) / 2;
    printf("\nThe value of the integral is %0.4f", sum);
    return 0;
}