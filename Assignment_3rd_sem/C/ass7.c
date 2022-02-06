#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 3
void insert();
void delete ();
void display();
int queue[MAXSIZE], rear = -1, front = -1;
int main()
{
    int c;
    while (1)
    {
        printf("\n1.Insert element to Circular queue \n2.Delete element from Circular queue \n3.Display all elements of Circular queue \n4.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
        }
    }
}
void insert()
{
    int add;
    if ((rear == MAXSIZE - 1 && front == 0) || (front == rear + 1))
        printf("Queue Overflow \n");
    else
    {
        if (front == -1 && rear == -1)
            front = 0;
        else if (rear == MAXSIZE - 1)
            rear = 0;
        printf("Inset the element in Circular queue : ");
        scanf("%d", &add);
        rear += 1;
        queue[rear] = add;
    }
}
void delete ()
{
    int remove;
    if (front == -1 && rear == -1)
        printf("Queue Underflow \n");
    else
    {
        remove = queue[front];
        printf(" Element deleted from Circular queue is : %d\n", remove);
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else if (front == MAXSIZE - 1)
            front = 0;
        else
            front += 1;
    }
}
void display()
{
    int i;
    if (front == -1)
        printf("Queue is Empty");
    printf("\n Elements in Circular Queue are: ");
    if (front <= rear)
    {
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
    else
    {

        for (i = front; i <= MAXSIZE - 1; i++)
            printf("%d ", queue[i]);

        for (i = 0; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}