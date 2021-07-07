#include "holberton.h"
#include <stdio.h>

/**
 *print_diagsums - prints the sum of diagonals
 *@a: the int array
 *size: how much we sum
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int d1 = 0, d2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
			d1 += a[i];
			}
			if (i == size - j - 1)
			{
			d2 += a[j];
			}
		}
	}
	printf("%i", d1+ d2);

}

