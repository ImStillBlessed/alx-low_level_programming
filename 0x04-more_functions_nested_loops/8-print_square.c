#include "main.h"
/**
 * print_square - prints a square
 * @size: size of the square
 * Return: 0.
 */
void print_square(int size)
{
	int a = 0;
	int b;

	if (size > 0)
	{
		while (a < size)
		{
			b = 0;
			while (b < size)
			{
				_putchar('#');
				b++;
			}
			a++;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
