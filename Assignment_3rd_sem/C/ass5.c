#include <stdio.h>
#include <stdlib.h>
#define Maxsize 3
int main()
{
    int val, c, stck[Maxsize], tos = -1, i;
    while (1)
    {
        printf("1.Push \n2.Pop\n3.Display\n4.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            if (tos == Maxsize - 1)
                printf("Stack Overflow\n");
            else
            {
                printf("Enter the value to be insert: ");
                scanf("%d", &val);
                tos += 1;
                stck[tos] = val;
            }
            break;
        case 2:
            if (tos == -1)
                printf("Stack Underflow\n");
            else
            {
                printf("%d\n", stck[tos]);
                tos -= 1;
            }
            break;
        case 3:
            if (tos == -1)
                printf("Stack is Empty\n");
            else
            {
                for (i = tos; i >= 0; i--)
                    printf("%d\n", stck[i]);
            }
            break;
        case 4:
            exit(1);
        }
    }
    return 0;
}