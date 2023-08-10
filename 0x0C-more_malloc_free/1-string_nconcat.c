#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concats @n number of a second string to the first
 * @s1: first string.
 * @s2: second string.
 * @n: amount of s2 to use.
 * Return: pointer to new string or NULL if failed.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *out;
	unsigned int i;
	int start;

	if (s1 == NULL)
		start = 1;
	else
		start = strlen(s1);

	out = malloc(start + n + 1);
	if (out == NULL)
		return (NULL);

	for (i = 0; i < start; i++)
		out[i] = s1[i];

	for (i = 0; i < n; i++)
	{
		if (s2[i] == ' ')
			return (out);
		out[start + i] = s2[i];
	}
	return (out);
}
