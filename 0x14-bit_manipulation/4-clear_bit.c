#include "main.h"

/**
 * clear_bit - sets the bit at a given @index to 0
 * @n: the number to set
 * @index: index to set a 0
 * Return: 1 on success or -1 if failed.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	mask = 1UL << index;
	*n = *n & (~mask);
	return (1);
}
