#include "lists.h"

/**
 * free_dlistint - free a doubly linked list
 * @head: ptr to the first node.
 * Retrun: nothing.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr1, ptr2;

	if (head == NULL)
		exit(0);
	ptr1 = head;
	ptr2 = ptr1->next;
	while (ptr2 != NULL)
	{
		free(ptr1);
		ptr1 = ptr2;
		ptr2 = ptr1->next;
	}
}
