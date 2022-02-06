#include <stdio.h>
void towers(int, char, char, char);
int main()
{
    int n;
    printf("\n Enter the No of disks: ");
    scanf("%d", &n);
    printf("\n The sequence of moves involved in the Tower of Hanoi are :\n");
    towers(n, 'A', 'B', 'C');
    return 0;
}
void towers(int m, char s_peg, char a_peg, char d_peg)
{
    if (m > 0)
    {
        towers(m - 1, s_peg, d_peg, a_peg);
        printf("\n Move disk %d from peg %c to peg %c", m, s_peg, d_peg);
        towers(m - 1, a_peg, s_peg, d_peg);
    }
}