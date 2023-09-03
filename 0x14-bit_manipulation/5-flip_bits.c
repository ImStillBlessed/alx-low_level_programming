#include "main.h"

/**
 * flip_bits - calculates how many flips to get from one number to another
 * @n: first number
 * @m: seconf number
 * Return: 1 if successful, -1 if failed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned int count = 0;

	result = (n) ^ (m);

	while (result > 0)
	{
		count += result & 1;
		result >>= 1;
	}
	return (1);
}
