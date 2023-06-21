#include "main.h"
/**
 * print_last_digit - prints last digit
 * @num: digit to be filtered
 * Return: 0.
 */
int print_last_digit(int num)
{
	int j;

	j = j % 10;
	if (num < 0)
		num = num * -1;
	_putchar('0' + j);
	return (j);
}
