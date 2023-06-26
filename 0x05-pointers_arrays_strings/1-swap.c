#include "main.h"

/**
 * swap_int - swaps values
 * @a: first value
 * @b: second val
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int i, j;

	i = *a;
	j = *b;
	*a = j;
	*b = i;
}
