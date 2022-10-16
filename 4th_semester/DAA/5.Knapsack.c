//Knapsack problem by greedy algorithm

#include <stdio.h>
void knapsack(int n, float w[], float p[], float capacity)
{
    int i, u;
    float x[20], tp = 0;
    u = capacity;
    for (i = 0; i < n; i++)
    {
        if (w[i] > u)
            break;
        else
        {
            x[i] = 1.0;
            tp = tp + p[i];
            u = u - w[i];
        }
    }
    if (i < n)
    {
        x[i] = u / w[i];
        tp = tp + (x[i] * p[i]);
        printf("\nThe resultant vector is:");
        for (i = 0; i < n; i++)
            printf("%f\t", x[i]);
        printf("\nMax profit is: %f", tp);
    }
}
int main()
{
    float w[20], p[20], capacity, ratio[20], temp;
    int i, j, n;
    printf("\nEnter the no.of objects: ");
    scanf("%d", &n);
    printf("\nEnter the weights and profits of each objects: ");
    for (i = 0; i < n; i++)
        scanf("%f %f", &w[i], &p[i]);
    printf("\nEnter the capacity of knapsack: ");
    scanf("%f", &capacity);
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (ratio[i] < ratio[j])
            {
                temp = ratio[j];
                ratio[j] = ratio[i];
                ratio[i] = temp;

                temp = w[j];
                w[j] = w[i];
                w[i] = temp;

                temp = p[j];
                p[j] = p[i];
                p[i] = temp;
            }
        }
    }
    knapsack(n, w, p, capacity);
    return 0;
}
