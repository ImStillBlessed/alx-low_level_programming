#include <stdio.h>
#include "main.h"

/**
 * get_bit - loops through the bit number to find the number @index
 * @n: the number input
 * @index: the inddx of the return nunber
 * Return: the number '1 or 0' @index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	n = n >> index;
	return (n & 1);
}
