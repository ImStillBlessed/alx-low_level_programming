#include <stdio.h>
#include "main.h"

/**
 * get_bit - loops through the bit number ti find the number @index
 * @n: the number input
 * @index: the inddx of the return nunber
 * Return: the number '1 or 0' @index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	int bit;

	if (index > sizeof(unsigned long int))
		return (-1);
	mask = 1UL << index;
	bit = (n & mask) != 1;
	return (bit);
}
