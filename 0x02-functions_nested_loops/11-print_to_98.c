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
		while ( n < 98 )
		{
			_putchar('0' + n);
			_putchar(',');
			_putchar(' ');
			n++;
		}
		while ( n > 98 )
		{
			_putchar('0' + n);
			_putchar(',');
			_putchar(' ');
			n--;
		}
		_putchar('98');
	}
	else
		_putchar('98');
}
