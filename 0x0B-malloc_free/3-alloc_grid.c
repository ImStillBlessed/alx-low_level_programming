#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * alloc_grid - allocates memory to a 2 dimentional array
 * @width: width or columns
 * @height: height or rows
 * Return: a pointre to the space in memory.
 */
int **alloc_grid(int width, int height)
{
	int **new_grid;
	int all = width * height;

	if (width <= 0 || height <= 0)
		return (NULL);

	new_grid = malloc(sizeof(int) * all);
	if (new_grid == NULL)
		return (NULL)

	while (i <= height)
	{
		while (j <= width)
		{
			new_grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (new_grid);
}
