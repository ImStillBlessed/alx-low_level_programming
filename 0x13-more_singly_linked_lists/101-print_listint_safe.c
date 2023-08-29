#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints list and the address of each node
 * @head: pointer to the first node
 *
 * Return: the number of nodes in the list, 0 if failed
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptr;
	int i = 0;

	if (head = NULL)
		return (0);
	ptr = head;
	for (i = 0; ptr != NULL; i++)
	{
		printf("[%p] %d\n", ptr, ptr->n);
		ptr = ptr->next;
	}
	return (i);
}
