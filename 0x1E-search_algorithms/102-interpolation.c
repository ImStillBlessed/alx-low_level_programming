#include "search_algos.h"

/**
 * interpolation_search - seatches useing interpolation search.
 * @array: pointer the first element in the ordered list.
 * @size: total elements in the array
 * @value: the value to find in the array.
 * Return: index of @value else -1.
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t high = size - 1;
	size_t low = 0
	size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
