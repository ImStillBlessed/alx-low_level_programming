#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* @argc: number of arguments
* @argv: arguments
* Return: 0.
*/
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc < 3)
	{
		Printf("ERROR");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
		printf("%d\n" sum);
	}
	return (0);
}
