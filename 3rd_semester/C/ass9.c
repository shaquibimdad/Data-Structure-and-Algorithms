#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start = NULL;
struct node *new_node, *temp, *prev;

int i, pos, a;
int count()
{
    int c = 0;
    temp = start;
    while (temp != NULL)
    {
        c += 1;
        temp = temp->next;
    }
    return c;
}
void node()
{

    new_node = (struct node *)malloc(sizeof(struct node));
    printf("\n Enter the value of new node: ");
    scanf("%d", &new_node->data);
}

void insert_l()
{
    node();
    new_node->next = NULL;
    if (start == NULL)
        start = new_node;
    else
    {
        temp = start;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = new_node;
    }
}
void create_list()
{
    char ch = 'y';
    while (ch == 'y' || ch == 'Y')
    {
        insert_l();
        printf("\n Do you want to insert another node: ");
        scanf(" %c", &ch);
    }
}
void insert_f()
{
    node();
    new_node->next = start;
    start = new_node;
}
void ins_after_val()
{
    printf("\n Enter the value ");
    scanf("%d", &a);
    temp = start;

    while (temp != NULL && temp->data != a)
        temp = temp->next;

    if (temp == NULL)
        printf("\n NOT PResent");
    else
    {
        node();
        new_node->next = NULL;
        new_node->next = temp->next;
        temp->next = new_node;
    }
}

void ins_at_pos()
{
    int n, c = 1;
    printf("\n The no of nodes=%d", count());
    n = count();
    printf("\n Enter the postion :");
    scanf("%d", &pos);
    if (pos == 1)
        insert_f();
    else if (pos == n + 1)
        insert_l();
    else if (pos > n + 1)
        printf("\n Invalid position ");
    else
    {
        temp = start;
        while (c < pos - 1)
        {
            temp = temp->next;
            c += 1;
        }
        node();
        new_node->next = temp->next;
        temp->next = new_node;
    }
}
void reverse()
{
    struct node *curr = start, *next;
    prev = NULL;
    while (curr != NULL)
    {

        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    start = prev;
}
void del_f()
{
    if (start == NULL)
        printf("\n No List Found");
    else
    {
        temp = start;
        start = temp->next;
        free(temp);
    }
}
void del_l()
{
    temp = start;
    prev = NULL;
    if (temp == NULL)
        printf("\n No List Found");
    else if (temp->next == NULL)
        del_f();
    else
    {
        while (temp->next != NULL)
        {
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
        free(temp);
    }
}
void del_after_val()
{
    struct node *temp1;
    printf("\n Enter the value: ");
    scanf("%d", &a);
    temp = start;
    while (temp != NULL && temp->data != a)
        temp = temp->next;
    if (temp == NULL)
        printf("\n can't found ");
    else
    {
        if (temp->next == NULL)
            printf("\n Not Present");
        else
        {
            temp1 = temp->next;
            temp->next = temp1->next;
            free(temp1);
        }
    }
}
void del_at_pos()
{
    int c = 1, n;
    prev = NULL;
    printf("\n The no of nodes=%d", count());
    n = count();
    printf("\n Enter the postion :");
    scanf("%d", &pos);
    if (pos == 1)
        del_f();
    else if (pos == n)
        del_l();
    else if (pos > n)
        printf("\n Invalid position\n\n");
    else
    {
        temp = start;
        while (c < pos - 1)
        {
            temp = temp->next;
            c += 1;
        }
        prev = temp->next;
        temp->next = prev->next;
        free(prev);
    }
}
void display()
{
    temp = start;
    while (temp != NULL)
    {
        printf(" %d----->", (*temp).data);
        temp = temp->next;
    }
    printf(" NULL");
}
int main()
{
    int n;
    printf("\n 1.Create the Node \n 2.Insert the node at the the Front\n 3.Insert the node at the the End\n 4.Insert the node After a Given value\n 5.Insert a certain position to insert the Node \n 6.Reverse the node\n 7.Delete the node at the the Front\n 8.Delete the node at the the END\n 9.Delete After a Value \n 10.Delete at position\n 11.Display the node\n 12.Exit");
    while (1)
    {
        printf("\n Enter your choice: ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            create_list();
            break;
        case 2:
            insert_f();
            break;
        case 3:
            insert_l();
            break;
        case 4:
            ins_after_val();
            break;
        case 5:
            ins_at_pos();
            break;
        case 6:
            reverse();
            break;

        case 7:

            del_f();
            break;
        case 8:

            del_l();
            break;
        case 9:

            del_after_val();
            break;
        case 10:
            del_at_pos();
            break;
        case 11:
            display();
            break;
        case 12:
            exit(1);
        }
    }
    return 0;
}