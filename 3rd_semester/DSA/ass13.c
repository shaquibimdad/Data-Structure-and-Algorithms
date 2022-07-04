#include <stdio.h>
#define Maxsize 5
int main()
{
    int a[Maxsize], i, first = 0, last, m, s, k = 0, n;
    printf("\n Enter the Number of elements: ");
    scanf("%d", &n);
    printf("\n Enter the elements in ascending order :\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("\n The array elements are:\n");
    for (i = 0; i < n; i++)
        printf("\t%d ", a[i]);
    printf("\n Enter the value to search: ");
    scanf("%d", &s);
    last = n - 1;
    while (first <= last)
    {
        m = (first + last) / 2;
        if (a[m] == s)
        {
            k = 1;
            break;
        }
        else
        {

            if (a[m] < s)
                first = m + 1;
            else

                if (a[m] > s)
                last = m - 1;
        }
    }
    if (k == 1)
        printf(" Element is present at index %d", m + 1);
    else
        printf(" Element is not present in array");
    return 0;
}