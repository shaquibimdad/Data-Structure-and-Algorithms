#include <stdio.h>
#define INF 9999
int mincost = 0, v1, v2, n, k, i, j, g[100][100], visited[10], min;
void prims()
{
    for (i = 1; i <= n; i++)
        visited[i] = 0;
    visited[1] = 1;
    for (k = 1; k <= n - 1; k++)
    {
        min = INF;
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                if (g[i][j] != INF && visited[i] == 1 && visited[j] == 0)
                {
                    if (g[i][j] < min)
                    {
                        min = g[i][j];
                        v1 = i;
                        v2 = j;
                    }
                }
            }
        }
        printf("\nEdge %d = (%d---%d)", k, v1, v2);
        visited[v1] = visited[v2] = 1;
        mincost += min;
    }
    printf("\nMinimum Cost:%d", mincost);
}
int main()
{
    printf("\nEnter the no. of vertices:");
    scanf("%d", &n);
    printf("\nEnter the adjacent Matrix:");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &g[i][j]);
            if (g[i][j] == 0)
            {
                g[i][j] = INF;
            }
        }
    }
    prims();
    return 0;
}