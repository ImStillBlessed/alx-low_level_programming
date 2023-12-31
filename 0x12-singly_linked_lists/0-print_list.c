#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prjnts the elements in a list @list_t
 * @h: first element in the list
 *
 * Return: a pointer to the lists.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	const list_t *ptr;

	if (h == NULL)
		return (0);
	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
	
