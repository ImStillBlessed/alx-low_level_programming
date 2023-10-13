#include "lists.h"

/**
 * get_dnodeint_at_index - accesses the node @index of a list
 * @head: ptr to the first node.
 * @index: index of the node to print.
 * Return: the node of interest.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	if (index < 0)
		return (NULL);
	current = head;
	i = 0;
	while (current != NULL)
	{
		if (i != index)
		{
			current = current->next;
			i++;
		}
		else
			return (current);
	}
	return (NULL);
}
