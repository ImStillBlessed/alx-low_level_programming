#include "main.h"

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
      puts(a[i]);
      if (i != n)
      {
        _putchar(',');
        _putchar(' ');
      }
      i++;
    }
  _putchar('\n');
}
