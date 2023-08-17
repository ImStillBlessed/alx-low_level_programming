#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>

/**
 * print_strings - prints strings and puts a character between them
 * @seperator: the character to put between the numbers.
 * @n: number of variables to work with.
 * Return: nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(strs);

	va_start(strs, n);
	for (i = 0; i < n; i++)
	{
		const char *str = va_arg(strs, const char *);

		if (str != NULL)
			printf("%s", str);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
        printf("\n");
}
