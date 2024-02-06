#include "search_algos.h"

/**
 * jump_search - searches an array using jump search
 * @array: pointer to the first element in the array.
 * @size: number of elements on the array.
 * @value: the value to search for
 * Return: the index of @value ele -1.
 * 
 * Description: jump step = sqrt(size)
*/

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t current = 0, prev;

	if (array == NULL || size == 0)
		return (-1);

	while (array[current] < value)
	{
		printf("Value checked array[%d] = [%d]\n", current, array[current]);
		current += step;
	}
	prev = current - step;
	printf("Value found between indexes [%d] and [%d]\n", prev, current);
	for (; prev < size ; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}
	return (-1);
}