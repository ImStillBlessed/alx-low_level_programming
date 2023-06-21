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
			if (n > 9)
			{
				_putchar('0' + n / 10);
				_putchar('0' + n % 10);
				_putchar(',');
				_putchar(' ');
				n++;
			}
			else
			{
				_putchar('0' + n);
				_putchar(',');
				_putchar(' ');
			}
		}
		while ( n > 98 )
		{
			if (n > 99)
			{
				_putchar('0' + n / 100);
				_putchar('0' + n / 10);
				_putchar('0' + n % 10);
				_putchar(',');
				_putchar(' ');
				n--;
			}
			else
			{
				_putchar('0' + 9);
				_putchar('0' + 9);
			}
		}
		_putchar('9');
		_putchar('8');
	}
	else
	{
		_putchar('9');
		_putchar('8');
	}
}
