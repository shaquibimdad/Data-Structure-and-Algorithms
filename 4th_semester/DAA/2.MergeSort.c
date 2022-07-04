#include <stdio.h>
#define size 50
int a[size], i;
void merge(int l, int mid, int h)
{
    int x[size], j, k;
    i = l;
    j = mid + 1;
    k = l;
    while (i <= mid && j <= h)
    {
        if (a[i] <= a[j])
        {
            x[k] = a[i];
            i++;
        }
        else
        {
            x[k] = a[j];
            j++;
        }
        k++;
    }
    while (i <= mid)
    {
        x[k++] = a[i++];
    }
    while (j <= h)
    {
        x[k++] = a[j++];
    }
    printf("\n Auxiliary array is:\n ");
    for (k = l; k <= h; k++)
    {
        printf("%d\t ", x[k]);
    }
    for (k = l; k <= h; k++)
    {
        a[k] = x[k];
    }
    for (i = l; i < l + k; i++)
    {
        a[i] = x[i];
    }
}
void mergesort(int l, int h)
{
    int mid;
    if (l < h)
    {
        mid = (l + h) / 2;
        mergesort(l, mid);
        mergesort(mid + 1, h);
        merge(l, mid, h);
    }
}
int main()
{
    int n;
    printf("Enter the Size of Array: ");
    scanf("%d", &n);
    //	for(i=0;i<n;i++)
    printf("\nEnter the Elements:\n ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nThe Unsorted Array is:\n ");
    for (i = 0; i < n; i++)
    {
        printf(" %d", a[i]);
    }
    mergesort(0, n - 1);
    printf("\nThe Sorted Array is:\n ");
    for (i = 0; i < n; i++)
    {
        printf(" %d", a[i]);
    }
    return 0;
}