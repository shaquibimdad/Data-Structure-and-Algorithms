#include <stdio.h>
#define Maxsize 10
int main()
{
    int a[Maxsize], i, k, p = -1, n;
    printf("\n Enter the Number of elements: ");
    scanf("%d", &n);
    printf("\n Enter the elements :\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("\n Enter the the search elements:");
    scanf("%d", &k);
    for (i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            p = i;
            break;
        }
    }
    if (p != -1)
        printf("\nThe search elemement %d is found at the position %d", k, p + 1);
    else
        printf("\nThe element is not present the array");
    return 0;
}