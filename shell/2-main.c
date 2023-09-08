#include <stdio.h>

int main()
{
	char *ptr;

	printf("$ ");
	scanf("%s", ptr);
	printf("%c\n", *ptr);
	return (0);
}
