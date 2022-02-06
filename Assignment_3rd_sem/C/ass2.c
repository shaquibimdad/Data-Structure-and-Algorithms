#include <stdio.h>
int main()
{
    int a[20][20], b[20][20], n, m, i, j, count_1 = 0, count_2 = 0, z = 1;
    printf("\n Enter the number for row : ");
    scanf("%d", &n);
    printf("\n Enter the number for column : ");
    scanf("%d", &m);
    printf("\n Enter the number :\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
            if (a[i][j] == 0)
                count_1 += 1;
            else
                count_2 += 1;
        }
    }
    if (count_1 <= count_2)
        printf("\n The given matrix is not a Sparse matrix.");
    else
    {
        printf("\n The matrix is a Sparse matrix.\n");
        b[0][0] = n;
        b[0][1] = m;
        b[0][2] = count_2;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                if (a[i][j] != 0)
                {
                    b[z][0] = i;
                    b[z][1] = j;
                    b[z][2] = a[i][j];
                    z++;
                }
            }
        }
        for (i = 0; i < z; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("\t%d", b[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}