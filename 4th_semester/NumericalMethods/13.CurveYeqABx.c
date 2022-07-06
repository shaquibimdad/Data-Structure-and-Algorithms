#include <stdio.h>
#include <math.h>
int main()
{
    int i, n;
    float x[20], y[20], Y[20], sumx = 0.0, sumY = 0.0, sumxY = 0.0, sumx2 = 0.0, a, b, A, B;
    printf("Enter the number of points:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\Enter the value of x[%d]:", i);
        scanf("%f", &x[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("\Enter the value of y[%d]:", i);
        scanf("%f", &y[i]);
        Y[i] = log10(y[i]);
    }
    for (i = 0; i < n; i++)
    {
        sumx = sumx + x[i];
        sumY = sumY + Y[i];
        sumxY = sumxY + x[i] * Y[i];
        sumx2 = sumx2 + x[i] * x[i];
    }
    A = (sumx2 * sumY - sumx * sumxY) / (n * sumx2 - sumx * sumx);
    B = (n * sumxY - sumx * sumY) / (n * sumx2 - sumx * sumx);
    a = pow(10, A);
    b = pow(10, B);
    printf("\nThe equation of the curve is y=(%0.2f)*(%0.2f)^x", a, b);
    return 0;
}