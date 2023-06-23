#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
	_putchar('\n');
	}

	else
	{
		for (int row = 1 ; row <= size ; row++)
		{
			for (int space = size - row ; space > 0 ; space--)
			{
				_putchar(' ');
			}

			for (int hash = 1 ; hash <= row ; hash++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
