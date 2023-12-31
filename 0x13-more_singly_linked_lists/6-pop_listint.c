#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - removes the first node on the list
 * @head: pointer to the first element
 *
 * Return: the value on the first node.
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int i;

	if (*head == NULL)
		return (0);
	ptr = *head;
	i = ptr->n;
	*head = ptr->next;
	free(ptr);
	return (i);
}
