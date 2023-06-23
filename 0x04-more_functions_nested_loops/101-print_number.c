#include "main.h"

/**
 * print_number - prints integer
 * @n: number to be printed
 * Return: void
 */
void print_number(int n)
{
	int a, b, c;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	b = n;
	for (a = 10 ; b > 9 ; a *= 10)
	{
		b = b / a;
	}
	while (a >= 10)
	{
		_putchar('0' + n % a);
		a = a / 10;
	}
}
