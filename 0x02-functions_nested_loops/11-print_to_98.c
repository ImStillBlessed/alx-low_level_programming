#include "main.h"
/**
 * print_to_98 - prints number till 98
 * @n: number
 * Return: 0.
 */
void print_to_98(int n)
{
	if (n != 98)
	{
		for (n < 98 ; n++)
		{
			_putchar('0' + n);
			_putchar(',');
			_putchar(' ');
		}
		for (n > 98 ; n--)
		{
			_putchar('0' + n);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('0' + 98);
	}
	else
		_putchar('0' + 98);
}
