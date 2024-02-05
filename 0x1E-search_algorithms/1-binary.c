#include "search_algos.h"

int helper(int *array, size_t start, size_t end, int value);
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
	if (array == NULL)
		return (-1);
	return (helper(array, 0, size - 1, value));
}


/**
 * helper - helper function for binary_search.
 * @array: pointer to the first element on the list.
 * @start: index of tge first element on the filtered list
 * @end: last element on filtered list
 * @value: value to find.
 * Return: index of @value or -1 on failure.
 */


int helper(int *array, size_t start, size_t end, int value)
{
	size_t i, mid = start + (end - start) / 2;

	if (start > end)
		return (-1);
	printf("Searching in array: ");
	for (i = start ; i <= end ; i++)
	{
		printf("%d", array[i]);
		if (i != end)
			printf(", ");
		else
			printf("\n");
	}
	if (array[mid] == value)
		return (mid);
	if (value > array[mid])
		return (helper(array, mid + 1, end, value));
	else
		return (helper(array, start, mid - 1, value));
	return (-1);
}
