#include "lists.h"

/**
 * sum_dlistint - sums all the data in a list
 * @head: ptr to the first node of the list
 * Return: summ of all the values.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum;

	if (head == NULL)
		return (0);
	current = head;
	sum = 0;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
