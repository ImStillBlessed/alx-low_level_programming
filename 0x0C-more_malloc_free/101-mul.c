#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * main - Entry point
 * @ac: number of arguments
 * @av: array of argument
 * Return: the product of the two numbers
 */
int main(int ac, char **av)
{
	int ans, first, second;

	if (ac > 3)
	{
		printf("Error\n");
		exit(98);
	}
	first = atoi(av[1]);
	second = atoi(av[2]);
	ans = first * second;
	printf("%d\n", ans);
	return (0);
}
