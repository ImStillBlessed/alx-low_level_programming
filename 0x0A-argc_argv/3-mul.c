#include <stdio.h>
/**
* main - Entry point
* @argc: number of arguments
* @argv: arguments
* Return: 0.
*/
int main(int argc, char *argv[])
{
	int i;
	int sum;

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
