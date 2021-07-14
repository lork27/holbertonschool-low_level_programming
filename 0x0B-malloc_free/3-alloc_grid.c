#include "holberton.h"

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

  allocarr = (int *)malloc(height * sizeof(int*));

  for(i = 0; i < height; i++)
  {
    allocarr[i] = (int *)malloc(width * sizeof(int));
    free(allocarr[i]);
  }

  for(i = 0; i < height; i++)
  {
    for(j = 0; j < width; j++)
    {
      allocarr[i][j] = save;
    }
  }


  return (&allocarr);
}
