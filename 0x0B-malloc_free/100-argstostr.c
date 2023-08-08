#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * argstostr - prints terminal arguments as strings
 * @ac: argument counter
 * @av: argument variable (array)
 * Return: print the arguments or return NULL.
 */
char *argstostr(int ac, char **av)
{
	int i;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (i = 1; i < ac; i++)
	{
		printf("%s\n", av[i]);
	}
	return (0);
}
