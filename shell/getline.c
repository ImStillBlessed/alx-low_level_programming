#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *buffer;
	size_t buffsize = 32;
	size_t characters;

	buffer = malloc(buffsize * sizeof(char));
	if (buffer == NULL)
		exit(1);
	printf("$ ");
	characters = getline(&buffer, &buffsize, stdin);
	printf("%s", buffer);
	printf("%zu\n", characters);
	return (0);
}
