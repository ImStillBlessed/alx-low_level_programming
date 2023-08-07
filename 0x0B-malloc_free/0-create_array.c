#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates and returns a modified array
 * @size: the size of the array
 * @c: initializing character
 * Return: 0 incase of error 1.
 */
char *create_array(unsigned int size, char c)
{
	char *val;

	if (size == 0)
		return (NULL);
	while (1)
	{
		val = malloc(sizeof(char) * size);
		if (val == NULL)
			return (NULL);
		val[0] = c;
	}
	return (val);
}
