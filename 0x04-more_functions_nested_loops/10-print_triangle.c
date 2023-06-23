#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: 0.
 */
void print_triangle(int size)
{
	int a, b, c;

	if (size > 0)
	{
		a = 0;
		c = size;
		while (a <= size)
		{
			b = 0;
			while (b <= size)
			{
				if (b >= c)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
				b++;
			}
			a++;
			c--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
