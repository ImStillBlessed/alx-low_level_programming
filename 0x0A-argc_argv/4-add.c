#include <stdio.h>
/**
* main - Entry point
* @argc: number of arguments
* @argv: arguments
* Return: 0.
*/
int main(int argc, char *argv)
{
	int sum = 0;
	int i;

	if (argc < 2)
		prinf("%d", 0);
	else
		for (i = 1; i < argc; i++)
		{
			if (!(argv[i] < 65 && argv[i] > 15))
			{
				printf("ERROR\n");
				return (1);
			}
			sum += argv[i];
			printf("%d\n", sum);
		}
} 
