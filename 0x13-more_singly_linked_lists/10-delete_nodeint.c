#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node @index
 * @index: index of the node to delete
 *
 * Return: 1 if success -1 if failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *temp;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head->next;
		free(*head);
		*head = temp;
		return (1);
	}
	ptr = *head;
	while (i < index - 1)
	{
		if (ptr == NULL)
			return (-1);
		ptr = ptr->next;
	}
	temp = ptr->next;
	ptr->next = temp->next;
	free(temp);
	return (1);
}
