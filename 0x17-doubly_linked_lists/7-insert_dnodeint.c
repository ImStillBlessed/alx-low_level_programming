#include "lists.h"

/**
 * insert_dnodeint_at_index - adds a new node @idx
 * @h: ptr to the first node
 * @idx: index to insert the new node.
 * @n: value of the new node.
 * Return: ptr to the new node, or NULL if failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new_node;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	current = *h;
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = current;
		current->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	i = 0;
	while (current != NULL)
	{
		if (i != idx)
		{
			current = current->next;
			i++;
		}
		else
		{
			new_node->prev = current->prev;
			new_node->next = current;
			current->prev = new_node;
			new_node->prev->next = new_node;
			return (new_node);
		}
	}
	return (NULL);
}
