#include <stdio.h>
#define INF 9999
int dist[20][20], cost[20][20];
void floyd(int n)
{
    int i, j, k;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            dist[i][j] = cost[i][j];
        }
    }
    for (k = 1; k <= n; k++)
    {
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                if (dist[i][j] > dist[i][k] + dist[k][j])
                {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
    printf("\nThe Distance matrix is:\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%d\t", dist[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int i, j, n;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    printf("\nEnter the cost matrix:\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &cost[i][j]);
            if (i != j && cost[i][j] == 0)
            {
                cost[i][j] = INF;
            }
        }
    }
    floyd(n);
    return 0;
}