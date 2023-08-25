#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the start of the list.
 * @head: poinyer to the start of the list
 * @str: data for the first list
 * Return: 0.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->len = strlen(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
