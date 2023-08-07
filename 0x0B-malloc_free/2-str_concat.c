#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concats 2 strings and returns pointer
 * @s1: first string
 * @s2: second string
 * Return: pointer to the new string or NULL.
 */
char *str_concat(char *s1, char *s2)
{
	int one, two, total;
	int i = 0;
	char *n_str;
	int j = 0;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
	{
		one = 0;
		two = strlen(s2);
	else if (s2 == NULL)
		one = strlen(s1);
		two = 0;
	else
	{
		one = strlen(s1);
		two = strlen(s2);
	}
	total = one + two + 1;

	n_str = malloc(sizeof(char) * total);
	while (i <= one)
	{
		if (n_str == NULL)
			return (NULL);
		n_str[i] = s1[i];
		i++;
	}
	while (j <= two)
	{
		n_str[i] = s2[j];
		i++;
		j++;
	}
	return (n_str);
}
