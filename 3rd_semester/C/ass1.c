#include <stdio.h>
#include <stdlib.h>

int main()

{
    int s, i, a[50], p = 0, d = 0, max, min, n;
    printf("\n 1.Find maximum and minimum element from array along with their position \n 2.Insert an element to a given position \n 3.Remove an element from the array \n 4.Diplay the array\n 5.Exit");
    printf("\n Enter the Number of Elements : ");
    scanf("%d", &n);
    printf("\nEnter the numbers :\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    while (1)
    {
        printf("\nEnter your choice : ");
        scanf("%d", &s);
        switch (s)

        {
        case 1:
            max = a[0];
            min = a[0];
            for (i = 0; i < n; i++)
            {

                if (max < a[i])
                {

                    max = a[i];
                    p = i;
                }

                if (min > a[i])
                {

                    min = a[i];
                    d = i;
                }
            }
            printf("\n Maximun element position of %d is %d", max, p + 1);
            printf("\n Maximun element position of %d is %d", min, d + 1);
            break;
        case 2:

            printf("\nEnter the position to insert an element : ");
            scanf("%d", &p);
            printf("Enter the value : ");
            scanf("%d", &d);
            p = p - 1;
            for (i = n - 1; i >= p; i--)
            {
                a[i + 1] = a[i];
            }
            a[p] = d;
            n += 1;
            break;

        case 3:

            printf("Enter the position to remove an element : ");
            scanf("%d", &p);
            for (i = p - 1; i < n - 1; i++)
                a[i] = a[i + 1];
            n -= 1;
            break;

        case 4:

            printf("\nHere is the array:\n");
            for (i = 0; i < n; i++)
                printf("\t%d", a[i]);
            break;

        case 5:

            exit(1);
        }
    }

    return 0;
}