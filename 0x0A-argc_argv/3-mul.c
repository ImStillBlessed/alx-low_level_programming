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
	int i, j, ans = 0;

	if (argc < 3)
	{
		printf("ERROR\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	ans = i * j;
	printf("%d\n", ans);
	return (0);
}
