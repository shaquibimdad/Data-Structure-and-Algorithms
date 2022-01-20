#include <stdio.h>

int main()
{
	int mat[50][50], sparse[50][3];
	int i, j, nzero = 0, r, c, k, m, zero = 0;
	printf("Enter number of rows : ");
	scanf("%d", &r);
	printf("Enter number of columns : ");
	scanf("%d", &c);

	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++)
		{
			printf("Enter element for row %d,column %d : ", i + 1, j + 1);
			scanf("%d", &mat[i][j]);
		}

	printf("Entered matrix is : \n\n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%6d", mat[i][j]);
			if (mat[i][j] != 0)
				nzero++;
		}
		printf("\n");  ///////sigmmmmmmmmm
	}
	zero = (r * c) - nzero;
	if (nzero >= zero)
	{
		printf("\nThe matrix is not a sparse matrix\n");
		return 0;
	}
	else
	{
		k =  1;
		sparse[0][0] = r;
		sparse[0][1] = c;
		sparse[0][2] = nzero;
		m = 1;

		for (i = 0; i < r; i++)
		{
			for (j = 0; j < c; j++)
			{
				if (mat[i][j]!=0)
				{
					sparse[k][0] = i;
					sparse[k][1] = j;
					sparse[k][2] = mat[i][j];
					k++;
				}
			}
		}
	}

		printf("Sparse matrix in three tuple format is :\n");
		for (i = 0; i < k; i++)
		{
			for (j = 0; j < 3; j++)
				printf("%6d", sparse[i][j]);
			printf("\n");
		}
	}