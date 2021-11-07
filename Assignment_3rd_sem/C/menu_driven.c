#include <stdio.h>
#include <stdlib.h>
void max_min(int arr1[], int num)
{
    int i, max, min, pos_max, pos_min;
    max = arr1[0];
    for (i = 0; i < num; i++)
    {
        if (max < arr1[i])
        {
            max = arr1[i];
            pos_max = i;
        }
    }
    for (i = 0; i < num; i++)
    {

        if (min > arr1[i])
        {
            min = arr1[i];
            pos_min = i;
        }
    }
    printf("maximum is: %d at %d position", max, pos_max);
    printf("minimum is: %d at %d position", min, pos_min);
}
void insert(int arr1[], int l)
{
    int n, p;
    printf("Enter the number to be inserted: ");
    scanf("%d", &n);
    printf("Enter the postion you want to entrer the number");
    scanf("%d", &p);
    l++;
    for (int i = p; i < l; i++)
    {
        arr1[i] = arr1[i + 1];
    }

    arr1[p - 1] = n;
}

void delete (int arr[], int len)
{
    int pos;
    printf("Enter the postion from which you need to remove: ");
    scanf("%d", &pos);
    if (pos > len)
    {
        printf("Invalid Input~~~~~out of range~~~~~");
    }
    else
    {
        for (int i = pos - 1; i < len - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

    }

}
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int n;
    printf("How many numbers do you want to enter in the array? ");
    scanf("%d", &n);
    int arr[n], i;
    for (i = 0; i < n; i++)
    {
        printf("Enter the number at %d postion: ", i);
        scanf("%d", &arr[i]);
    }
    while (1)
    {
        printf("\nPress 1 for max and min: \n");
        printf("Press 2 for inserting a element: \n");
        printf("Press 3 for deleting a element: \n");
        printf("Press 4 for diplaying the Array: \n");
        printf("Press 5 to exit: \n");
        scanf("%d", &i);
        switch (i)
        {
        case 1:
            max_min(arr, n);
            break;
        case 2:
            insert(arr, n);
            n++;
            break;
        case 3:
            delete (arr, n);
            n--;
            break;
        case 4:
            display(arr, n);
            break;
        case 5:
            exit(1);
        default:
            printf("INVALID INPUT");

            break;
        }
    }

    return 0;
}
