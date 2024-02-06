#include "search_algos.h"

int helper(int *array, size_t low, size_t high, int value);

/**
 * interpolation_search - searches useing interpolation search.
 * @array: pointer the first element in the ordered list.
 * @size: total elements in the array
 * @value: the value to find in the array.
 * Return: index of @value else -1.
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t high = size - 1;
	size_t low = 0;

	if (array == NULL || size == 0)
		return (-1);
	return (helper(array, low, high, value));
}

/**
 * helper - recursion helper for the interpolitan_search
 * @array: pointer the first element in the ordered list
 * @low: the start f the list
 * @high: the end of the list
 * @value: the value to find in the array.
 * Return: index of @value else -1.
*/

int helper(int *array, size_t low, size_t high, int value)
{
	size_t pos;

	if (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low 
		+ (((double)(high - low) / (array[high] - array[low])) 
		* (value - array[low]));
		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return pos;
		if (array[pos] < value)
			return helper(array, pos + 1, high, value);
		if (array[pos] < value)
			return helper(array, low, pos - 1, value);
	}
	printf("Value checked array[%d] is out of range\n", pos);
	return (-1);
}
