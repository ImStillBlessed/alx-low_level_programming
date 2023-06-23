#include "main.h"

/**
 * print_number - prints integer
 * @n: number to be printed
 * Return: void
 */
void print_number(int n)
{

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	if (n < 1000)
	{
		_putchar('0' + n / 100);
		n = n % 100;
	}
	if (n < 100)
	{
		_putchar('0' + n / 10);
		n = n % 10;
	}
	if (n < 10)
	{
		_putchar('0' + n);
	}
}
