#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - functiontgat serches for an integer
 * @array: array of integers to search
 * @size: size of the array
 * @cmp: the functionto compare the integers
 * Return: index of the integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, k;

	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (size < 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		k = cmp(array[i]);
		if (k == 1)
			return (i);
	}
	return (-1);
}
