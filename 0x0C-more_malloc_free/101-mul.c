#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
#include <ctype.h>

/**
 * main - Entry point
 * @ac: number of arguments
 * @av: array of arguments
 * Return: 0 on success, 98 on error
 */
int main(int ac, char **av)
{
	int ans, first, second, i;

	if (ac != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (strlen(av[1]) == 0 || strlen(av[2]) == 0)
	{
		printf("Error\n");
		return (98);
	}

	for (i = 0; av[1][i]; i++)
	{
		if (!isdigit(av[1][i]))
		{
			printf("Error\n");
			return (98);
		}
	}
	first = atoi(av[1]);

	for (i = 0; av[2][i]; i++)
	{
		if (!isdigit(av[2][i]))
		{
			printf("Error\n");
			return (98);
		}
	}
	second = atoi(av[2]);

	ans = first * second;
	printf("%d\n", ans);

	return (0);
}
