#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sums all the integer data on the list
 * @head: pointer to the first element on the list
 *
 * Return: the sum of all the integers.
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int i = 0;

	if (head == NULL)
		return (0);
	ptr = head;
	while (ptr != NULL)
	{
		i += ptr->n;
		ptr = ptr->next;
	}
	return (i);
}
