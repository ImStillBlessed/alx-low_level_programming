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

	if (str == NULL)
		return (NULL);
	str_size = strlen(*str);
	i = 0;
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
