#include <stdio.h>

int main()
{
  int elements[50], n, c, d, swap;

  printf("Enter the number of elements you want to store:\n");
  scanf("%d", &n);

  printf("Enter %d integer values: \n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &elements[c]);
                                                // Bubble Sort
  for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (elements[d] < elements[d+1])
      {
        swap       = elements[d];
        elements[d]   = elements[d+1];
        elements[d+1] = swap;
      }
    }
  }

  printf("After sorting the elements in descending order is: \n");

  for (c = 0; c < n; c++)
     printf("%d\n", elements[c]);

  return 0;
}
