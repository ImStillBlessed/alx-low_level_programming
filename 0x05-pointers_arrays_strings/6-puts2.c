#include "main.h"

/**
 * puts2 - prints odd index in the string
 * @str: string
 * Return: void.
 */
void puts2(char *str)
{
  int index = 0;

	while (str[index] != '\0')
	{
    if (index % 2 != 0)
      _putchar(*str);
    index++;
  }
  _putchar('\n');
}
