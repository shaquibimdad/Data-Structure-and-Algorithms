#include <stdio.h>
int main()
{
    int row, col, i, j, z = 0, nz = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);
    printf("Enter the elements of 2D matrix:\n");
    int matrix[row][col];
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter at %d , %d postion of matrix: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (matrix[i][j] == 0)
            {
                z++;
            }
            else
            {
                nz++;
            }
        }
    }
    if (z > nz)
    {
        printf("It's an sparse matrix\n");
        printf("%d  %d  %d\n", row, col, nz);
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (matrix[i][j] != 0)
            {
                printf("%d  %d  %d\n", i, j, matrix[i][j]);
            }
        }
    }
    return 0;
}
