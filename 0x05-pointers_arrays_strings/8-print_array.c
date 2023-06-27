#include "main.h"
#include <stdio.h>

/**
 * print_array - prints content of an array
 * @a: array
 * @n: array lenght
 */
void print_array(int *a, int n)
{
  int i = 0;

  while (i <= n)
    {
      printf("%s", a[i]);
      if (i != n)
      {
        printf(', ');
      }
      i++;
    }
  _putchar('\n');
}
