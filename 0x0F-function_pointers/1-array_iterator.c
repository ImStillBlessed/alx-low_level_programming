#include <stdio.h>
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

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
