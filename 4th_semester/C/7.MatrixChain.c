#include <stdio.h>
#define INF 9999
int n, m[10][10], s[10][10], p[10];
int matrix(int n)
{
    int i, j, k, l, q;
    for (i = 1; i <= n; i++)
    {
        m[i][i] = 0;
    }
    for (l = 2; l <= n; l++)
    {
        for (i = 1; i <= n - l + 1; i++)
        {
            j = i + l - 1;
            m[i][j] = INF;
            for (k = i; k <= j - 1; k++)
            {
                q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                if (q < m[i][j])
                {
                    m[i][j] = q;
                    s[i][j] = k;
                }
            }
        }
    }
}

void optimal_paren(int i, int j)
{
    if (i == j)
    {
        printf("A%d ", i);
    }
    else
    {
        printf("(");
        optimal_paren(i, s[i][j]);
        optimal_paren(s[i][j] + 1, j);
        printf(")");
    }
}

int main()
{
    int x, i, j;
    printf("Enter the number of dimension: ");
    scanf("%d", &x);
    printf("\nEnter %d dimensions: ", x);
    for (i = 0; i < x; i++)
    {
        scanf("%d", &p[i]);
    }
    n = x - 1;
    matrix(n);
    optimal_paren(1, n);
    printf("\nThe content of m table is: \n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i <= j)
                printf("%d\t", m[i][j]);
            else
                printf("\t");
        }
        printf("\n");
    }
    printf("\nThe content of s table is: \n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i <= j)
                printf("%d\t", s[i][j]);
            else
                printf("\t");
        }
        printf("\n");
    }
    printf("The minimum cost is : %d ", m[1][n]);
    return 0;
}