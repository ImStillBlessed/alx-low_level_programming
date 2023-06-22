#include "main.h"

/**
 * print_diagonal - prints diagonal lines
 * @n: how long the line should be
 * Return: 0.
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int a = 0;
		int b;

		while (a < n)
		{
			b = 0;
			while (b < a)
			{
				_putchar(' ');
				b++;
			}
			_putchar('\\');
			_putchar('\n');
			a++;
		}
	}
	else
		_putchar('\n');
}

