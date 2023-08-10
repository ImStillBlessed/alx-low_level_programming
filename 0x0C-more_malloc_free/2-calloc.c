#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - will allocate memory and set elements to 0.
 * @nmemb: number of elements in the array
 * @size: size in bytes of elements.
 * Return: pointer to the new array, NULL if fail.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	memset(array, 0, nmemb * size);
	return (array);
}
