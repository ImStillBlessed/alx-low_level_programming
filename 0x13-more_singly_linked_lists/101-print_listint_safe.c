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
	const listint_t *ptr1, *ptr2;
	int i = 0;

	if (head == NULL)
		exit(98);
	ptr1 = head;
	ptr2 = head;
	while (ptr1 == NULL || ptr2 == NULL || ptr2->next == NULL)
	{
		ptr1 = ptr1->next;
		ptr2 = ptr2->next->next;
		if (ptr1 == ptr2)
		{
			printf("[%p] %d\n", (void *)ptr1, ptr1->n);
			return (i + 1);
		}
		printf("[%p] %d\n", (void *)ptr1, ptr1->n);
		i++;
	}
	ptr1 = head;
	for (i = 0; ptr1 != NULL; i++)
	{
		printf("[%p] %d\n", (void *)ptr1, ptr1->n);
		ptr1 = ptr1->next;
	}
	return (i);
}
