#include <stdio.h>
#include "main.h" 
/**
* print_diagsums - prints sum of diagonal numbers in 2d array
* @a: array
* @size: how big the diagonal should be
*/

void print_diagsums(int *a, int size)
{
  int i, j;
  int val1 = 0;
  int val2 = 0;

  for (i = 0; i < size; i++)
      val1 += a[i][i];
  for (j = size - 1, i = 0; j >= 0; j--, i++)
      val2 += a[i][j];
  printf("%d %d", val1, val2);
}
