#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees memory allocated for the list of integers
 * @head: pointer to the first node on the list
 *
 * Return: nothing.
 */

void free_listint(listint_t *head)
{
	listint_t *ptr, *temp;

	if (head == NULL)
	{
		free(head);
		exit(0);
	}
	ptr = head;
	while (ptr != NULL)
	{
		temp = ptr;
		ptr = temp->next;
		free(temp);
	}
	free(ptr);
}
