#include "holberton.h"
#include <stdlib.h>

/**
 *array_range - creates organized array of integers
 *@min: min value in int
 *@max: max value in int
 *Return: array of organized ints
 *
 */

int *array_range(int min, int max)
{
	int *order;
	int i;

	if (min > max)
		return (NULL);
	order = malloc(sizeof(int) * ((max - min) + 1));
	if (order == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		order[i] = min;
	return (order);
}
