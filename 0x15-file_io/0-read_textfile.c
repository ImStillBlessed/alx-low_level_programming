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
int filed;
ssize_t file_rd = 0;
char *buffer;

if (filename == NULL)
return (0);
filed = open(filename, O_RDONLY);
if (filed == -1)
return (0);
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
close(filed);
return (0);
}
file_rd = read(filed, buffer, letters);
if (file_rd == -1)
{
close(filed);
free(buffer);
return (0);
}
write(STDOUT_FILENO, buffer, file_rd);
free(buffer);
close(filed);
return (file_rd);
}
}
