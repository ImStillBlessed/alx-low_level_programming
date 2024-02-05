#include "search_algos.h"

/**
 * binary_search - function to search
 * @array: pointer to first value on the list
 * @size: total values on the list
 * @value: the value to find.
 * Return: the index of the @value element else -1.
 *
 * description: searches for a value in a sorted array
 * of integers using the Binary search algorithm
 */

int binary_search(int *array, size_t size, int value)
{
	int mid;
	size_t i, start = 0;
	size_t end = size - 1;

	if (array == NULL)
		return (-1);
	while (1)
	{
		printf("Searching in array: ");
		for (i = start ; i <= end ; i++)
		{
			printf("%d", array[i]);
			if (i != end)
				printf(", ");
			else
				printf("\n");
		}

		mid = (start + end) / 2;
		if (array[mid] == value)
			return (mid);
		if (end == start)
			break;
		if (value > array[mid])
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}
