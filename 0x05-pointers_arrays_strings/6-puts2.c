#include "main.h"

/**
 * puts2 - prints odd index in the string
 * @str: string
 * Return: void.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i == 0)
			_putchar(str[0]);
		else if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
