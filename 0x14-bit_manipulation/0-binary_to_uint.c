#include <string.h>
#include "main.h"

/**
 * binary_to_int - converts a binary number to an integer
 * @b: the binarry number
 *
 * Return: pointer to the new number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len = strlen(b);

	for (int i = 0; i < len; i++)
	{
		if (b[i] == '1')
			result = (result << 1) | 1;
		else if (b[i] == '0')
			result = result << 1;
		else
			return (0);
	}
	return (result);
}
