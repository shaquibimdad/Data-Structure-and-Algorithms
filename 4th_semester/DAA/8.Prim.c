#include <stdio.h>
int visited[10], min, mincost = 0, g[20][20], n;
#define inf 9999
void prims()
{
    int i, j, k, v1, v2;
    for (j = 1; j <= n; j++)
    {
        visited[j] = 0;
    }
    visited[1] = 1;
    for (k = 1; k <= n - 1; k++)
    {
        min = inf;
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                if (g[i][j] != inf && visited[i] == 1 && visited[j] == 0)
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
        printf("\nEdge:- %d = ( %d -> %d )", k, v1, v2);
        visited[v1] = 1;
        visited[v2] = 1;
        mincost = mincost + min;
    }
    printf("\nThe minimum cost of spanning tree is-> %d", mincost);
}

int main()
{
    int i, j;
    printf("Enter the no of vertex-");
    scanf("%d", &n);
    printf("\nEnter the elements-\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &g[i][j]);
            if (g[i][j] == 0)
            {
                g[i][j] = inf;
            }
        }
    }
    prims();
    return 0;
}
/*  
0 10 0 5 0
0 0 1 2 0 
0 0 0 0 4
0 3 9 0 2
20 0 6 0 0 
*/