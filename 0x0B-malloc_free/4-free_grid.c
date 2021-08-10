#include "holberton.h"
#include <stdlib.h>

/**
 *free_grid - free
 *@grid: the grid to be freed
 *@height: of the array
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
