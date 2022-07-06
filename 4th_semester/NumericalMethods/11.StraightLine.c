#include <stdio.h>
int main()
{
    int i, n;
    float x[20], y[20], sumx = 0.0, sumy = 0.0, sumxy = 0.0, sumx2 = 0.0, a, b;
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
    }
    a = (sumx2 * sumy - sumx * sumxy) / (n * sumx2 - sumx * sumx);
    b = (n * sumxy - sumx * sumy) / (n * sumx2 - sumx * sumx);
    printf("\nThe equation of the straight line is: y=(%0.2f)+(%0.2f)*x", a, b);
    return 0;
}