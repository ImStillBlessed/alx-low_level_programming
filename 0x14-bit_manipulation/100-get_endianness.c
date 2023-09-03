#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 1 if little endian, 0 if big endian.
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *byte = (char *)&num;

	if (*byte == 1)
		return (1);
	return (0);
}
