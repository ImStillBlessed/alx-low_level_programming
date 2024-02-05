#include "search_algos.h"

/**
 * linear_search - funtion that finds a value using linear search algorithm
 * @array: the array to search
 * @size: total size of the array
 * @value: the value to look for.
 * Return: the index of tge value if found else return -1.
 */

int linear_search(int *array, size_t size, int value)
{
	int i;
	size_t length = 0;

	if (array == NULL)
		return (-1);

	for (i = 0 ; length < size ; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		length++;
	}
	return (-1);
}
