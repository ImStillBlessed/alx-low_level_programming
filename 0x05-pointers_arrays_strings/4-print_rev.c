#include "main.h"

/**
 * print_rev - prints reverse string
 * @s: string to be reversed
 * Return: 0.
 */
void print_rev(char *s)
{
	int i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	while (i > 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
