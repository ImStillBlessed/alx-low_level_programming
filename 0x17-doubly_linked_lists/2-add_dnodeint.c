#include "lists.h"

/*
 * add_dnodeint - adds a node at the beginning
 * @head: pointer to the forst node of the list.
 * @n: value to add
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current;

	current->next = *head;
	*head = current;
	current->n = n;

	return (current);
}
