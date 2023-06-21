#include "main.h"
/**
 * print_last_digit - prints last digit
 * @num: digit to be filtered
 * Return: 0.
 */
int print_last_digit(int num)
{
	int j;

	j = num % 10;
	if (j < 0)
		j = j * -1;
	_putchar('0' + j);
	return (j);
}
