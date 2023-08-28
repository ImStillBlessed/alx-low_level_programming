#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints the values in the list.
 * @h: pointer to the first node on the list
 *
 * Return: the number of nodes or NULL if empty
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	int i;

	if (h == NULL)
		return (0);
	ptr = h;
	for (i = 0; ptr != NULL; i++)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (i);
}
