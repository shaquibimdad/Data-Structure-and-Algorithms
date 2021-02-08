#include <stdio.h>

int main()
{

    int i, j, a, n, s[50];


    printf("Enter the number of elements you want to store: ");
    scanf("%d", &n);

    printf("Enter %d integer values: \n",n);

    for (i = 0; i < n; ++i)
    
        scanf("%d", &s[i]);
                                                   //  Selection Sort
    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (s[i] < s[j])
            {
                a = s[i];
                s[i] = s[j];
                s[j] = a;
            }
        }
    }

    printf("After sorting the array is: \n");

    for (i = 0; i < n; ++i)
    {
        printf("%d\n", s[i]);
    }
}
