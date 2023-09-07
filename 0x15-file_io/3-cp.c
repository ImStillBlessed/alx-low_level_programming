#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * main - entry point for the cp functionality
 * @ac: argument counter
 * @av: argument array variable
 * Return: 98 or 99 or 100.
 */

int main(int ac, char **av)
{
	char str[1024];
	size_t bytes_read;
	FILE *fp;
	FILE *fpi;

	if (ac != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fp = fopen(av[1], "rb");
	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fpi = fopen(av[2], "w");
	if (fpi == NULL)
	{
		fprintf(stderr, "Error: Can't write to %s\n", av[2]);
		fclose(fp);
		exit(99);
	}
	while ((bytes_read = fread(str, 1, 1024, fp)) > 0)
	{
		if (fwrite(str, 1, bytes_read, fpi) != bytes_read)
		{
			fprintf(stderr, "Error: Can't write to %s\n", av[2]);
			fclose(fp);
			fclose(fpi);
			exit(99);
		}
	}

	fclose(fp);
	if (fclose(fp) != 0)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", fileno(fp));
		exit(100);
	}
	fclose(fpi);
	if (fclose(fpi) != 0)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", fileno(fpi));
		exit(100);
	}
	return (0);
}
