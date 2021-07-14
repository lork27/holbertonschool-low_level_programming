#include "holberton.h"
#include <stdlib.h>

/**
 *alloc_grid - return pointer to a 2d array of int
 *@width: of the array
 *@height: of the array
 *Return: pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **allocarr;
	int save = 0;

	if (width <= 0)
		return (NULL);
	if (width <= 0)
		return (NULL);
	allocarr = (int **)malloc(height * sizeof(int *));
	if (allocarr == 0)
	{
		free(allocarr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		allocarr[i] = (int *)malloc(width * sizeof(int));
		if (allocarr == 0)
		{
			for (; i >= 0; i--)
			{
				free(allocarr[i]);
			}
			free(allocarr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			allocarr[i][j] = save;
		}
	}
	return (allocarr);
}
