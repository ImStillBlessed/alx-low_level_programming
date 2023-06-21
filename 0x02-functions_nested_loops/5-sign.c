#include "main.h"
/**
 * print_sign - prints sign of character *n
 *
 * @n: value to be processed
 *
 * Return: 0.
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
