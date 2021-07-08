#include "holberton.h"
#include <stdio.h>

/**
 *print_diagsums - prints the sum of diagonals
 *@a: the int array
 *@size: length of row
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int square = size * size;
	int ct = 0, ct2 = 0;


	for (i = 0, j = size - 1; i < square; i += size + 1, j += size - 1)
	{
		ct += a[i];
		ct2 += a[j];
	}

	printf("%d, %d \n", ct, ct2);

}

