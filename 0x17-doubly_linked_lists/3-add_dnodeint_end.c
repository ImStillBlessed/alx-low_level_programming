#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of the list
 * @head: ptr to the first node
 * @n: the value of the new node
 * Return: ptr to the new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *ptr;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;
	new_node->prev = ptr;
	ptr->next = new_node;
	return (new_node);
}
