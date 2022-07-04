#include <stdio.h>
#include <stdlib.h>
#define Maxsize 10
void s_sort(int *, int);
void i_sort(int *, int);
void merge(int *, int low, int mid, int high);
void merge_sort(int *, int low, int high);
int partition(int *, int p, int r);
void quicksort(int *, int, int);
int i = 0, j = 0, k = 0, temp;
int main()
{
    int a[Maxsize], n, s;
    printf("\n 1.Enter the Array \n 2.Selection Sort \n 3.Insertion sort \n 4.Merge sort\n 5.Quick sort\n 6.Diplay the array \n 7.Exit");
    while (1)
    {
        printf("\n Enter your choice : ");
        scanf("%d", &s);
        switch (s)
        {

        case 1:

            printf("\n Enter the Number of Elements : ");
            scanf("%d", &n);
            printf("\n Enter the numbers :\n");
            for (i = 0; i < n; i++)
                scanf("%d", &a[i]);
            printf("\n Unsorted array elements are\n");
            for (i = 0; i < n; i++)
                printf("\t%d", *(a + i));
            break;

        case 2:

            s_sort(a, n);
            break;
        case 3:

            i_sort(a, n);
            break;
        case 4:
            printf("\n'Merge Sort'\n");
            merge_sort(a, 0, n - 1);
            break;
        case 5:
            printf("\n'Quick Sort'\n");
            quicksort(a, 0, n - 1);
            break;
        case 6:
            printf("\n Sorted array elements are\n");
            for (i = 0; i < n; i++)
                printf("\t%d", *(a + i));
            break;

        case 7:

            exit(1);
        }
    }
    return 0;
}
void s_sort(int *b, int m)
{
    printf("\n'SELECTION SORT'\n");
    int min;
    for (i = 0; i < m - 1; i++)
    {
        min = *(b + i);
        k = i;
        for (j = i + 1; j < m; j++)
        {
            if (min > *(b + j))
            {
                min = *(b + j);
                k = j;
            }
        }
        if (i != k)
        {
            temp = *(b + i);
            *(b + i) = *(b + k);
            *(b + k) = temp;
        }
    }
}
void i_sort(int *b, int m)
{
    printf("\n'INSERTION SORT'\n");
    for (i = 1; i <= m - 1; i++)
    {
        temp = *(b + i);
        for (j = i - 1; j >= 0 && *(b + j) > temp; j--)
            *(b + (j + 1)) = *(b + j);
        *(b + (j + 1)) = temp;
    }
}
void merge_sort(int *m, int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = ((low + high) / 2);
        merge_sort(m, low, mid);
        merge_sort(m, mid + 1, high);
        merge(m, low, mid, high);
    }
}
void merge(int *m, int low, int mid, int high)
{
    int b[Maxsize];
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high)
    {
        if (*(m + i) < *(m + j))
        {
            *(b + k) = *(m + i);
            i++;
            k++;
        }
        else
        {
            *(b + k) = *(m + j);
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        *(b + k) = *(m + i);
        i++;
        k++;
    }
    while (j <= high)
    {
        *(b + k) = *(m + j);
        k++;
        j++;
    }
    for (k = low; k <= high; k++)
        *(m + k) = *(b + k);
}
void quicksort(int *m, int p, int r)
{
    int q;
    if (p < r)
    {
        q = partition(m, p, r);
        quicksort(m, p, q - 1);
        quicksort(m, q + 1, r);
    }
}
int partition(int *m, int p, int r)
{
    k = *(m + p);
    i = p;
    j = r;
    while (i < j)
    {
        while (*(m + i) <= k)
            i++;
        while (*(m + j) > k)
            j--;
        if (i < j)
        {
            temp = *(m + i);
            *(m + i) = *(m + j);
            *(m + j) = temp;
        }
    }
    *(m + p) = *(m + j);
    *(m + j) = k;
    return j;
}