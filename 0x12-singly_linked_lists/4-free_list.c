#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees memory allocated for each element in a list
 * @head: forst element of the list
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *ptr1, *ptr2;

	ptr1 = head;
	while (ptr1 != NULL)
	{
		ptr2 = ptr1->next;
		free(ptr1);
		ptr1 = ptr2;
	}
}
