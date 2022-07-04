#include <stdio.h>
#define inf 9999
#define max 10

int cost[max][max], dist[max], status[max], pi[max];
char name[max];
void shownpath(int a)
{
    if (a == 0 || pi[a] == 0)
    {
        printf(" %c", name[pi[a]]);
    }
    else
    {
        shownpath(pi[a]);
        printf("-> %c", name[pi[a]]);
    }
}
void dijkstra(int v, int n)
{
    int i, c, w, min, u;
    for (i = 1; i <= n; i++)
    {
        status[i] = 0;
        dist[i] = cost[v][i];
        pi[i] = 0;
    }
    dist[v] = 0;
    status[v] = 1;
    for (c = 2; c <= n; c++)
    {
        min = inf;
        for (w = 1; w <= n; w++)
        {
            if ((dist[w] < min) && (status[w] != 1))
            {
                min = dist[w];
                u = w;
            }
        }
        status[u] = 1;
        for (w = 1; w <= n; w++)
        {
            if ((dist[u] + cost[u][w] < dist[w]) && (status[w] != 1))
            {
                dist[w] = dist[u] + cost[u][w];
                pi[w] = u;
            }
        }
    }
    printf("\n The minimum  distance is %d", min);
}
int main()
{
    int i, j, n, v, x;
    printf("\n Enter the No of Vertices : ");
    scanf("%d", &n);
    printf("\n Enter the  Vertices : ");
    for (i = 1; i <= n; i++)
    {
        scanf("%s", &name[i]);
    }
    printf("\n Enter the Numbers \n ");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &cost[i][j]);
            if (i != j && cost[i][j] == 0)
                cost[i][j] = inf;
        }
    }
    printf("\n Enter the Source Vertices : ");
    scanf("%d", &v);
    printf("\n Enter the Target Vertices : ");
    scanf("%d", &x);

    dijkstra(v, n);

    printf("\n The Source Vertices %c ", name[v]);
    printf("\n The Target Vertices %c ", name[x]);
    printf("\nThe path %c", name[v]);
    shownpath(x);
    printf("--> %c", name[x]);
    return 0;
}
/*
0 10 0 5 0
0 0 1 2 0
0 0 0 0 4
0 3 9 0 2
20 0 6 0 0
*/