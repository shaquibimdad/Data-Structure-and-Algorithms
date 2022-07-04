#include <stdio.h>
#include <ctype.h>
#define MAXSIZE 10
 int tos = -1;
char stck[MAXSIZE];
void push(char x)
{
    if (tos == MAXSIZE - 1)
        printf("\nOverflow");
    else
    {
        tos++;
        stck[tos] = x;
    }
}
char pop()
{
    char r = '\0';
    if (tos == -1)
        printf("\nUnerflow");
    else
    {
        r = stck[tos];
        tos--;
    }
    return r;
}
int preced(char x)
{
    int val;
    if (x == '^')
        val = 10;
    else if (x == '*' || x == '/')
        val = 9;
    else if (x == '+' || x == '-')
        val = 8;
    else
        val = 7;
    return val;
}
int main()
{
    int i = 0, j = 0;
    char p[100], q[100], x;
    printf("Enter your Infix Expression,appended ) at end :\n");
    gets(q);
    push('(');
    while (q[i] != '\0')
    {
        if (isalpha(q[i]))
        {
            p[j] = q[i];
            j++;
        }
        else
        {
            if (q[i] == '(')
                push(q[i]);
            else if (q[i] == ')')
            {
                x = pop();
                while (x != '(')
                {
                    p[j] = x;
                    j++;
                    x = pop();
                }
            }
            else
            {
                while (preced(stck[tos]) >= preced(q[i]))
                {
                    p[j] = pop();
                    j++;
                }
                push(q[i]);
            }
        }
        i++;
    }
    p[j] = '\0';
    printf("Posfix Expression is : %s", p);
    return 0;
}