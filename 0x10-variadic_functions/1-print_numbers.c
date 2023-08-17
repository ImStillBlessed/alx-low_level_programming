#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>

/**
 * print_numbers - prints numbers and puts a character between them
 * @seperator: the character to put between the numbers.
 * @n: number of variables to work with.
 * Return: nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(nums);

	va_start(nums, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(nums, int));
			if (i == n - 1)
				break;
			printf("%s", separator);
		}
	}
	printf("\n");
}
