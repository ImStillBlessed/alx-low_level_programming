#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a list but sets its first node to 
 * @head: pointer to the pointer of the first node
 *
 * Return: nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr, *temp;

	if (*head == NULL)
	{
		free(head);
		printf("Freed!");
		exit(0);
	else
	{
		ptr = *head;
		while (ptr != NULL)
		{
			temp = ptr;
			ptr = temp->next;
			free(temp);
		}
		free(ptr);
	}
	*head = NULL;
}
