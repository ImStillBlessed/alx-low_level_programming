#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimentional grid mem allocatrd by malloc
 * @grid: input grid.
 * @height: grid height.
 * Return: a nothing but a freed memory.
 */
void free_grid(int **grid, int height)
{
	int i;

	free(grid);
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
}
