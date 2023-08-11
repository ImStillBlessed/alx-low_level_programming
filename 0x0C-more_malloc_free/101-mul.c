#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
#include <ctype.h>

/**
 * main - Entry point
 * @ac: number of arguments
 * @av: array of argument
 * Return: the product of the two numbers
 */
int main(int ac, char **av)
{
	int ans, first, second, i;

	if (ac > 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (strlen(av[1]) > 0)
	{
		for (i = 0; av[1][i]; i++)
		{
			if (!isdigit(av[1][i]))
			{
				printf("Error\n");
				exit(98);
			}
		}
		first = atoi(av[1]);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}

	if (strlen(av[2]) > 0)
	{
		for (i = 0; av[2][i]; i++)
		{
			if (!isdigit(av[2][i]))
			{
				printf("Error\n");
				exit(98);
			}
		}
		second = atoi(av[2]);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	ans = first * second;
	printf("%d\n", ans);
	return (0);
}
