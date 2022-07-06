#include <stdio.h>
int main()
{
    int i, n;
    float x[20], y[20], sumx = 0.0, sumy = 0.0, sumxy = 0.0, sumx2 = 0.0, sumx3 = 0.0, a, b;
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
    }
    for (i = 0; i < n; i++)
    {
        sumx = sumx + x[i];
        sumy = sumy + y[i];
        sumxy = sumxy + x[i] * y[i];
        sumx2 = sumx2 + x[i] * x[i];
        sumx3 = sumx3 + x[i] * x[i] * x[i];
    }
    a = (sumx3 * sumy - sumx2 * sumxy) / (sumx * sumx3 - sumx2 * sumx2);
    b = (sumx * sumxy - sumx2 * sumy) / (sumx * sumx3 - sumx2 * sumx2);
    printf("\nThe equation of the curve is: y=(%0.2f)*x+(%0.2f)*x^2", a, b);
    return 0;
}