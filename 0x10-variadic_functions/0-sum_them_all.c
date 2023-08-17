#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all the digita together
 * @n: number of arguments
 * Rdturn: the sum or NULL if fail.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int total = 0;
	va_list nums;

	if (n <= 0)
		return (0);
	va_start(nums, n);
	for(i = 0; i < n; i++)
		total += va_arg(nums, int);
	va_end(nums);
	return (total);
}
