#include<stdio.h>
int shifting(int arr[],int n)
{
    int i,temp,j;
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for ( i = 1; i < n; i++)
    {
        temp=arr[i];
        j=i-1;
        while (j>=0 &&arr[j]>temp)
        { 
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
        
    }
    return arr;
}
void printing(int arr[],int n)
{
    int i;
    printf("----------Sorted Array:----------\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main()
{
    int i,n,arr[15];
    printf("Enter the size of array:");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("Enter the element at %d position",i);
        scanf("%d",&arr[i]);
    }
    printf("----------Unsorted Array:----------\n");
    shifting(arr,n);
    printing(arr,n);
    return 0;
}