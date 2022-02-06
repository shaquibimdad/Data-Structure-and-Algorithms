#include <stdio.h>
#define n 5
int front = -1, rear = -1, queue[n];
void deletion()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
        return;
    }
    if (front == rear)
    {
        front = rear = -1;
        printf("Queue is empty:");
    }
    else
    {
        front = (front + 1) % n;
        printf("Element was removed from postion %d\n",front);
    }
}
void insetion()
{
    int x;
    printf("Enter the element to insert in Queue:\n");
    scanf("%d", &x);
    if(front==-1&&rear==-1)
    {
        front=0;
        rear=0;
        queue[rear]=x;
        printf("Element was inserted at postion %d\nPostion of front is %d\n",rear,front);
    }
    else if ((rear+1)%n==front)
    {
        printf("Queue is full:");
    }
    else
    {
        rear = (rear + 1) % n;
        queue[rear] = x;
        printf("Element was inserted at postion %d\nPostion of front is %d\n",rear,front);
    }
}
void display()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty:\n");
        return;
    }
    int i;
    for (i = front; i != rear+1; i = (i + 1) % n)
    {
        printf("%d ", queue[i]);
    }
    printf("\n");
    return;
}
int main()
{
    int c, ele;

    do
    {
        printf("\nPress 1 for inserting in Queue:\nPress 2 for deleting:\nPress 3 for displaying:\nPress 4 to exit:\n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            insetion();
            break;
        case 2:
            deletion();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exit...\n");
            break;
        default:
            printf("Invalid Input:\n");
            break;
        }
    } while (c != 4);
    return 0;
}