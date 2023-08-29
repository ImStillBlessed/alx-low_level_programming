#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at the specidied index
 * @head: pointer to the forst node
 * @idx: index to place the new node.
 * @n: value for the new node.
 *
 * Return: pointer to the new kode.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *temp;
	unsigned int i = 0;

	if (*head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	temp = *head;
	while (i < idx - 1)
	{
		if (temp == NULL)
		{
			free(ptr);
			return (NULL);
		}
		temp = temp->next;
		i++;
	}
	ptr->next = temp->next;
	temp->next = ptr;
	return (ptr);
}
