#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#define INF 9999
int visited[MAX];
int graph[MAX][MAX];
void dfs(int i)
{
    int j;
    visited[i] = 1;
    printf("%d ", i);
    for (j = 1; j <= MAX; j++)
    {
        if (graph[i][j] == 1 && visited[j] == 0)
        {
            dfs(j);
        }
    }
}
int main()
{
    int i, j, n;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    printf("\nEnter the adjacency matrix:\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &graph[i][j]);
            if (i != j && graph[i][j] == 0)
            {
                graph[i][j] = INF;
            }
        }
    }
    for (i = 1; i <= n; i++)
    {
        if (visited[i] == 0)
        {
            dfs(i);
        }
    }
    return 0;
}
