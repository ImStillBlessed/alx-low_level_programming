#include <stdio.h>
/**
* print_diagsums - prints sum of diagonal numbers in 2d array
* @a: array
* @size: how big the diagonal should be
*/

void print_diagsums(int *a, int size)
{
  int i = 0;
  int val1 = 0;
  int val2 = 0;

  while (i < size)
    {
      val1 += a[i][i];
      i++;
    }
  while (i >= 0)
    {
      val2 += a[i][i];
      i--;
    }
  printf("%d %d", val1, val2);
}
