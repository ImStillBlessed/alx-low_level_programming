#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - counts rhe munber of nodes in a list
 * @h: pointer to the first node on the list
 *
 * Return: the number of nodes on the list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	int i = 0;

	if (h == NULL)
		return (0);
	ptr = h;
	while (ptr != NULL)
	{
		i++;
		ptr = ptr->next;
	}
	return (i);
}
