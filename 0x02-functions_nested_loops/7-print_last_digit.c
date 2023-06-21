#include "main.h"
/**
 * print_last_digit - prints last digit
 * @num: digit to be filtered
 * Return: 0.
 */
int print_last_digit(int num)
{
	int j;

	if (num < 0)
		num = num * -1;
	j = num % 10;
	_putchar(j);
	return (j);
}
