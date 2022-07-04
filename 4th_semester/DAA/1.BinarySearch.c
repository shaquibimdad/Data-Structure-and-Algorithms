#include <stdio.h>
int binarysearch(int a[], int low, int high, int k)
{
    if (low > high)
    {
        return -1;
    }
    int mid;
    mid = (low + high) / 2;
    if (a[mid] == k)
    {
        return mid;
    }
    else if (a[mid < k])
    {
        return binarysearch(a, mid + 1, high, k);
    }
    else
    {
        return binarysearch(a, low, mid - 1, k);
    }
}
int main()
{
    int a[100], i, k, n, m, low, high;
    printf("\nEnter number of elements: ");
    scanf("%d", &n);

    printf("\nEnter %d elements: ", n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("\nEnter value to search: ");
    scanf("%d", &k);
    low = 0;
    high = n - 1;
    m = binarysearch(a, low, high, k);

    if (m != -1)
        printf("\n Element  is present at INDEX %d \n ", m);
    else
        printf("\nElement  is at INDEX %d \n ", m);
    return 0;
}