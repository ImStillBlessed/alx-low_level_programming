#include "main.h"

/**
 * print_most_numbers - prints numbers
 * Return: 0.
 */
void print_most_numbers(void)
{
	char a = 0;

	while (a < 10)
	{
		if (a != 2 && a != 4)
			_putchar('0' + a);
		a++;
	}
	_putchar('\n');
}
