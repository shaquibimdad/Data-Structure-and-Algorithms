#include <stdio.h>
#define Size 50
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
int partition(int arr[], int l, int h)
{
    int temp;
    int pivot = arr[l];
    int i = l, j = h;
    while (i < j)
    {
        while (arr[i] <= pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } // end while
    temp = arr[l];
    arr[l] = arr[j];
    arr[j] = temp;
    //		temp = arr[pivot];
    //		arr[pivot] = arr[j];
    //		arr[j] = temp;
    return j;
}
void Quick_Sort(int arr[], int l, int h)
{
    int i;
    if (l < h)
    {
        i = partition(arr, l, h);
        Quick_Sort(arr, l, i - 1);
        Quick_Sort(arr, i + 1, h);
    }
}
int main()
{
    int i, n, arr[Size];
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("\n Enter the numbers:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n Array before sorting:\n ");
    for (i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }
    printf("\n Array after sorting:\n ");
    Quick_Sort(arr, 0, n - 1);
    for (i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }

    return 0;
}