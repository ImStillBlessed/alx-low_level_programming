#include "main.h"
/**
 * print_line - prints a line
 * @n: is number of lines it prints
 * Return: 0.
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i = 0;

		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
