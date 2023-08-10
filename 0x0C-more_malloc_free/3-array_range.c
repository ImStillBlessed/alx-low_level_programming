#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * array_range - prints array of range @min to @max
 * @min: start of array
 * @max: end of array
 * Return: pointer to the new array or NULL if fail
 */
int *array_range(int min, int max)
{
	int i, size;
	int *array;

	if (min > max)
		return (NULL);
	size = max - min + 1
	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
