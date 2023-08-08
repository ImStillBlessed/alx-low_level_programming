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
	int i = 0;
	int j = 0;
	int k = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	new_grid = malloc(sizeof(int *) * height);
	if (new_grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	}
		new_grid[i] = malloc(sizeof(int) * width);
		if (new_grid[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(new_grid[k]);
			free(new_grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			new_grid[i][j] = 0;
		i++;
	}
	return (new_grid);
}
