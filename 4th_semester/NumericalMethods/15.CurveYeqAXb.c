#include <stdio.h>
#include <math.h>
int main()
{
    int i, n;
    float x[20], y[20], Y[20], X[20], sumX = 0.0, sumY = 0.0, sumXY = 0.0, sumX2 = 0.0, a, b, A;
    printf("Enter the number of points:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\Enter the value of x[%d]:", i);
        scanf("%f", &x[i]);
        X[i] = log10(x[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("\Enter the value of y[%d]:", i);
        scanf("%f", &y[i]);
        Y[i] = log10(y[i]);
    }
    for (i = 0; i < n; i++)
    {
        sumX = sumX + X[i];
        sumY = sumY + Y[i];
        sumXY = sumXY + X[i] * Y[i];
        sumX2 = sumX2 + X[i] * X[i];
    }
    A = (sumX2 * sumY - sumX * sumXY) / (n * sumX2 - sumX * sumX);
    b = (n * sumXY - sumX * sumY) / (n * sumX2 - sumX * sumX);
    a = pow(10, A);
    printf("\nThe equation of the curve is y=(%0.2f)*x^(%0.2f)", a, b);
    return 0;
}