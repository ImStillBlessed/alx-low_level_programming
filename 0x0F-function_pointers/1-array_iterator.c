#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"

/**
 * array_iterator - iterates through an array and call
 * a function for each element
 * @array: the array to iterate through
 * @size: size of the array
 * @action: the function witht the acgion to perform
 * Return: nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
		exit(0);
	if (action == NULL)
		exit(0);
	if (size < 0)
		exit(0);
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
