#include "main.h"

/**
 * set_bit - changes the bit at index to 1 or 0
 * @n: the number
 * @index: the index to change
 * Return: 1 if succesful -1 if failed.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	unsigned long int mask = 1UL << index;

	*n = *n | mask;
	return (1);
}
