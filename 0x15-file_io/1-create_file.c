#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - creates anf wrotes into a file
 * @filename: the name of the file
 * @text_content: the content to write into the file
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL)
		return (-1);
	file = fopen(filename, "w");
	if (file == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fclose(file);
		return (1);
	}
	fprintf(file, "%s", text_content);
	fclose(file);
	return (1);
}
