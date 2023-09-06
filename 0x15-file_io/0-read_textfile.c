#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * read_textfile - reads a text file and writes the @letters to the stdout
 * @filename: file to read.
 * @letters the nunber of letters to write
 * Returns: the number of letters it coukd write.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char ch[10000];
	size_t bytes;

	if (filename == NULL)
		return (0);
	file = fopen(filename, O_RDONLY);
	if (file == NULL)
		return (0);
	bytes = fread(ch, 1, letters, file);
	if (bytes > 0)
		fwrite(ch, 1, bytes, stdout);
	fclose(file);
	return (bytes);
}
