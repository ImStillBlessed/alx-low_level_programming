#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - counts the lenght of a list
 * @h: pointer to the first element of the list
 * Return: the number of elements on the list.
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	const list_t *ptr = h;

	if (h == NULL)
		return (0);
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
