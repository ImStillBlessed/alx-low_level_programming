#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char *buffer, *token;
	size_t buffsize = 32;

	printf("$ ");
	buffer = malloc(sizeof(char));
	if (buffer == NULL)
		return (0);
	getline(&buffer, &buffsize, stdin);
	token = strtok(buffer, " ");
	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, " ");
	}
	return (0);
}
