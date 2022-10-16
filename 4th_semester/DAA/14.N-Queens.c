//N-Queen problem by Backtracking Algorithm

#include <stdio.h>
#include <stdlib.h>
int x[100];
int place(int k, int i)
{ // 2 3
    for (int j = 1; j <= k - 1; j++)
    {
        if (x[j] == i || (abs(x[j] - i) == abs(j - k)))
            return 0;
    }
    return 1;
}
void N_Queen(int k, int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (place(k, i))
        {
            x[k] = i;
            if (k == n)
            {
                for (int i = 1; i <= n; i++)
                {
                    printf("\n");
                    for (int j = 1; j <= n; j++)
                    {
                        if (x[i] == j)
                        {
                            printf(" Q%d ", j);
                        }
                        else
                            printf(" . ");
                    }
                    printf("\n");
                }
            }
            else
            {
                N_Queen(k + 1, n);
            }
        }
    }
}
int main()
{
    int n;
    printf("\nEnter the No. of Queen:");
    scanf("%d", &n);
    N_Queen(1, n);
    return 0;
}
