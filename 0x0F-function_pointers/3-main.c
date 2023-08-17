#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: input count
 * @argv: input variables
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int first, second, ans;
	int (*res)(int, int);

	first = atoi(argv[1]);
	second = atoi(argv[3]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((strcmp(argv[2], "+") != 0 &&
				strcmp(argv[2], "-") != 0 && 
				strcmp(argv[2], "*") != 0 && 
				strcmp(argv[2], "/") != 0 && 
				strcmp(argv[2], "%") != 0))
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(argv[2], "/") == 0 && second == 0) ||
			(strcmp(argv[2], "%") == 0 && second == 0))
	{
		printf("Error\n");
		exit(100);
	}

	res = get_op_func(argv[2]);
	ans = res(first, second);
	printf("%d\n", ans);
	return (0);
}
