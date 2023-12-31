#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _realloc - reallocates memory for an array
 * @ptr: pointer to the inout array
 * @old_size: old size of the array @ptr
 * @new_size: new size to allocate.
 * Return: pointer to the reallocated array.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *array;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && !(ptr == NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		array = malloc(new_size);
		if (array == NULL)
			return (NULL);
		return (array);
	}

	if (new_size <= old_size)
	{
		array = malloc(new_size);
		if (array == NULL)
			return (NULL);
		memcpy(array, ptr, new_size);
		free(ptr);
		return (array);
	}

	array = malloc(new_size);
	if (array == NULL)
		return (NULL);
	memcpy(array, ptr, old_size);
	free(ptr);
	return (array);
}
