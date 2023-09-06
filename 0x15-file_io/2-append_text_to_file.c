#include <stdio.h>
#include "main.h"

/**
 * append_text_to_file - appends @text_contnet to @filename.
 * @filename: the name of the exixting file.
 * @text_content: contnet to append in @filename.
 * Return: 1 on success, -1 on failure or when file created.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;

	fp = fopen(filename, "a");
	if (fp == NULL)
		return(-1);
	if (text_content == NULL)
	{
		fclose(fp);
		return (1);
	}
	fprintf(fp, "%s", text_content);
	fclose(fp);
	return (1);
}
