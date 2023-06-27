#include "main.h"

/**
 * print_rev - prints reverse string
 * @s: string to be reversed
 * Return: 0.
 */
void print_rev(char *s)
{
	while (*s != '\0')
	{
		s++;
		print_rev(s);
		_putchar(*s);
	}
	_putchar('\n');
}
