#include "lists.h"

/*
 * dlistint_len - prints the count of a lists
 * @h: pointer to the head of the node
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t count;

	if (h == NULL)
		return (0);
	current = h;
	count = 0;
	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
