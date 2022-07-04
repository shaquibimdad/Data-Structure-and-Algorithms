#include <stdio.h>
void showpath(int j, int path[])
{
    if (path[j] == 0)
    {
        printf("%d", j);
        return;
    }
    showpath(path[j], path);
    printf("---->%d", j);
}
void dijkstra(int n, int m, int source, int adj[][100])
{
    int dist[n + 1], visited[n + 1], path[n + 1], u;
    for (int i = 1; i <= n; i++)
    {
        visited[i] = 0;
        dist[i] = adj[source][i];
        path[i] = source;
    }
    dist[source] = 0;
    visited[source] = 1;
    path[source] = 0;
    for (int edges = 1; edges <= m - 2; edges++)
    {
        int min = 1e5;
        for (int i = 1; i <= n; i++)
        {
            if (dist[i] < min && visited[i] != 1)
            {
                min = dist[i];
                u = i;
            }
        }
        visited[u] = 1;
        for (int i = 1; i <= n; i++)
        {
            if (min + adj[u][i] < dist[i] && visited[i] != 1)
            {
                dist[i] = min + adj[u][i];
                path[i] = u;
            }
        }
    }
    printf("\nMinimum Distance from Source:\n");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", dist[i]);
    }
    printf("\n");
    showpath(n, path);
}
int main()
{
    int n, m, s;
    int adj[100][100];
    printf("\nEnter the no. of vertices:");
    scanf("%d", &n);
    printf("\nEnter the no. of edges:");
    scanf("%d", &m);
    printf("\nEnter the Adjacent Matrix:\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf("%d", &adj[i][j]);
            if (adj[i][j] == 0)
            {
                adj[i][j] = 1e5;
            }
        }
    }
    printf("\nSource Node:");
    scanf("%d", &s);
    dijkstra(n, m, s, adj);
    return 0;
}