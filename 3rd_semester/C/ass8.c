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
    if ((front == 0 && rear == MAXSIZE - 1) || (front == rear + 1))
        printf("Queue Overflow\n");
    else
    {
        printf("Enter a number to Insert : ");
        scanf("%d", &add);
        if (rear == -1)
        {
            front = 0;
            rear = 0;
        }
        else if (rear == MAXSIZE - 1)
            rear = 0;
        else
            rear = rear + 1;
        queue[rear] = add;
    }
}
void delete ()
{
    int remove;
    if (front == -1)
        printf("Queue Underflow \n");
    else
    {
        remove = queue[front];
        printf("Element deleted from Circular queue is : %d\n", remove);
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
        printf("Queue is Empty\n");
    else
    {
        printf("Elements in Circular Queue are: \n");
        if (front <= rear)
        {

            for (i = front; i <= rear; i++)
                printf("%d ", queue[i]);
        }
        else
        {
            for (i = front; i <= MAXSIZE - 1; i++)
                printf("%d ", queue[i]);
            for (i = 0; i <= rear; i++)
                printf("%d ", queue[i]);
        }
    }
}