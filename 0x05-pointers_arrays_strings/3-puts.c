#include "main.h"

/**
 * _puts - places string to output
 * @str: pointer to string
 * Return: 0.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar("\n");
}
