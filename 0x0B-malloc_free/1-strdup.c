#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates and stores a given string
 * @str: string to work with
 * Return: pointer to the new string or NULL.
 */
char *_strdup(char *str)
{
	int i, str_size;
	char *new_str_mem;

	str_size = 0;
	i = 0;
	while (str != '\0')
	{
		str_size++;
		*str++;
	}
	new_str_mem = malloc(sizeof(char) * str_size + 1);
	while (i <= str_size + 1)
	{
		if (new_str_mem == NULL)
			return (NULL);
		new_str_mem[i] = str[i];
		i++;
	}
	return (new_str_mem);
}
