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
	int i = 0;
	char *val;

	if (size == 0)
		return (NULL);
	val = malloc(sizeof(char) * size);
	while (i < size)
	{
		if (val == NULL)
			return (NULL);
		val[i] = c;
		i++;
	}
	return (val);
}
