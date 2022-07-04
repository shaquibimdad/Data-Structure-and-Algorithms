#include <stdio.h>
int d[10], p[10], n, dmax, time[10];
char id[10];
void sort()
{
    int i, j, k;
    char t;
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            if (p[j] < p[j + 1])
            {
                k = p[j];
                p[j] = p[j + 1];
                p[j + 1] = k;

                t = id[j];
                id[j] = id[j + 1];
                id[j + 1] = t;

                k = d[j];
                d[j] = d[j + 1];
                d[j + 1] = k;
            }
        }
    }
}
int jobsequence()
{
    int i, j, k, c = 0;
    dmax = d[0];
    for (i = 0; i < n; i++)
    {
        if (dmax < d[i])
            dmax = d[i];
    }

    printf("\nmax deadline of jobs: %d", dmax);
    for (i = 1; i <= dmax; i++)
        time[i] = -1;

    for (i = 1; i <= n; i++)
    {
        k = d[i - 1];
        while (k >= 1)
        {
            if (time[k] == -1)
            {
                time[k] = i - 1;
                c++;
                break;
            }
            k--;
        }
        if (c == dmax)
            break;
    }
    return;
}
int main()
{
    int i, j, k, maxp, sump = 0;
    char t;
    printf("\nEnter no of jobs:");
    scanf("%d", &n);
    printf("\nEnter details of jobs:");
    for (i = 0; i < n; i++)
    {
        printf("\nEnter id:");
        scanf(" %c", &id[i]);
        printf("\nEnter profit:");
        scanf("%d", &p[i]);
        printf("\nEnter deadlines:");
        scanf("%d", &d[i]);
    }
    sort();
    printf("\nid\tdeadlines\tprofit\n");
    for (i = 0; i < n; i++)
    {
        printf("\n%d\t%d\t%d", id[i], d[i], p[i]);
    }
    jobsequence();
    printf("\nselected jobs are:\n");
    for (i = 1; i <= dmax; i++)
    {
        printf(" %c", id[time[i]]);
        sump += p[time[i]];
    }
    printf("\nMAX PROFIT is %d ", sump);
    return 0;
}