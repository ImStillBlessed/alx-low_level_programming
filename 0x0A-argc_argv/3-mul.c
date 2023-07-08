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
	int ans = 0;

	if (argc < 3)
	{
		printf("ERROR\n");
		return (1);
	}
	ans = atoi(argv[1] * argv[2]);
	printf("%d\n", ans);
	return (0);
}
