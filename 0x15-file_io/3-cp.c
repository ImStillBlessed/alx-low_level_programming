#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point for the cp functionality
 * @ac: argument counter
 * @av: argument array variable
 * Return: 98 or 99 or 100.
 */

int main(int ac, char **av)
{
	char str[1024];
	if (ac != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}

	FILE *fp;
	FILE *fpi;

	fp = fopen(av[1], "r");
	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fpi = fopen(av[2], "w");
	if (fpi == NULL)
	{
		fprintf(stderr, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	fread(str, 1, 1024, fp);
	fputs(str, fpi);
	fclose(fp);
	fclose(fpi);
	return (0);
}
