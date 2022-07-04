#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next, *prev;
};
struct node *start = NULL;
struct node *new_node, *temp, *temp1;

int pos, a;
void node()
{
    new_node = (struct node *)malloc(sizeof(struct node));
    printf("\n Enter the value of new node: ");
    scanf("%d", &new_node->data);
    new_node->next = NULL;
    new_node->prev = NULL;
}

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

void insert_l()
{
    node();
    if (start == NULL)
        start = new_node;
    else
    {
        temp = start;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = new_node;
        new_node->prev = temp;
    }
}
void create_list()
{
    char ch = 'y';
    while (ch == 'y' || ch == 'Y')
    {
        insert_l();
        printf("\n Do you want to insert another node(Y/N): ");
        scanf(" %c", &ch);
    }
}
void insert_f()
{
    node();
    if (start == NULL)
        new_node->next = NULL;
    else
    {
        start->prev = new_node;
        new_node->next = start;
    }
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
        printf("\n NOT Present");
    else if (temp->next == NULL)
        insert_l();
    else
    {

        node();
        new_node->next = temp->next;
        new_node->prev = temp;
        temp->next->prev = new_node;
        temp->next = new_node;
    }
}
void ins_at_pos()
{
    int n, c = 1;
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
        new_node->prev = temp;
        temp->next->prev = new_node;
        temp->next = new_node;
    }
}
void reverse()
{
    struct node *curr;
    curr = start;
    while (curr != NULL)
    {
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;
        curr = curr->prev;
    }
    if (temp != NULL)
        start = temp->prev;
}

void del_f()
{
    if (start == NULL)
        printf("\n No List Found");
    else
    {
        temp = start;
        start = temp->next;
        start->prev = NULL;
        free(temp);
    }
}

void del_l()
{
    temp = start;
    if (temp == NULL)
        printf("\n No List Found");
    else if (temp->next == NULL)
        del_f();
    else
    {
        while (temp->next != NULL)
        {
            temp1 = temp;
            temp = temp->next;
        }
        temp1->next = NULL;
        free(temp);
    }
}

void del_after_val()
{
    temp1 = NULL;
    printf("\n Enter the value: ");
    scanf("%d", &a);
    temp = start;
    while (temp != NULL && temp->data != a)
        temp = temp->next;
    if (temp == NULL)
        printf("\n can't found ");
    else if (temp->next == NULL)
        printf("\n Not Present");
    else
    {
        //printf("ok"); temp1=temp->next;
        temp->next = temp1->next;
        if (temp1->next != NULL)
            temp1->next->prev = temp;
        free(temp1);
    }
}
void del_at_pos()
{
    int n, c = 1;
    temp1 = NULL;
    n = count();
    printf("\n Enter the postion :");
    scanf("%d", &pos);
    if (pos == 1)
        del_f();
    else if (pos == n)
        del_l();
    else if (pos > n + 1)
        printf("\n Invalid position ");

    else
    {

        temp = start;
        temp1 = temp->next;
        while (c < pos - 1)
        {
            temp = temp->next;
            temp1 = temp->next;
            c += 1;
        }
        //printf("Why?");
        temp->next = temp1->next;
        temp1->next->prev = temp;
        free(temp1);
    }
}
void display()
{
    temp = start;
    while (temp != NULL)
    {
        temp1 = temp;
        printf("%d----->", (*temp).data);
        temp = temp->next;
    }
    printf("NULL");
    printf("\n");
    while (temp1 != NULL)
    {
        printf("%d----->", (*temp1).data);
        temp1 = temp1->prev;
    }
    printf("NULL");
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