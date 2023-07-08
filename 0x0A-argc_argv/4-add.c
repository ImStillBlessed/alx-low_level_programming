#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - Entry point
* @argc: number of arguments
* @argv: arguments
* Return: 0.
*/
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc > 1)
		for (i = 1; i < argc; i++)
		{
			if (argv[i] < '0' && argv[i] > '9')
			{
				printf("ERROR\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
	printf("%d\n", sum);
	return (0);
} 
