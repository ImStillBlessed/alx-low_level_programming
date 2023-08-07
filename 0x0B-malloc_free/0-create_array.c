#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array and makes the first val. a specified characte
 * @size: the size of the array
 * @c: initializing character
 * Return: 0 incase of error 1.
 */
char *create_array(unsigned int size, char c)
{
	char *val;

	if (size == 0)
		return (NULL);
	val = malloc(sizeof char * size);
	val[0] = c;
	return (val);
}
