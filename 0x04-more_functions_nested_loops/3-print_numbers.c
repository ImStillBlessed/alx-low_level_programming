#include "main.h"

/**
 * print_numbers - prints numbers
 * Return: 0.
 */
void print_numbers(void)
{
	char a = 0;

	while (a < 10)
	{
		_putchar('0' + a);
		a++;
	}
	_putchar('\n');
}
