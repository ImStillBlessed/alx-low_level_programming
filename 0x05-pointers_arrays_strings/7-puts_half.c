#include "main.h"
/**
 * puts-half - divides and prints half of a string
 * @str: string input
 * Return: void.
 */
void puts_half(char *str)
{
  int i = 0, len = 0;

  while (str[len++])
		len++;
  if (len % 2 == 0)
  {
    i = len / 2;
  }
  else
  {
    i = (len - 1) / 2;
  }
  while (str[i] != '\0')
    {
      _putchar(str[i]);
      i++;
    }
  _putchar('\n');
}
