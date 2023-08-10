#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory for a string
 * @b: ammount of memory to reseve.
 * Return: pointer to memory, 98 if failed.
 */
void *malloc_checked(unsigned int b)
{
	void *out;

	out = malloc(b);
	if (out == NULL)
		return (98);
	return (out);
}
