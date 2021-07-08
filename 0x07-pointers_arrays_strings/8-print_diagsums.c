#include "holberton.h"
#include <stdio.h>

/**
 *print_diagsums - prints the sum of diagonals
 *@a: the int array
 *@size: length of row
 */

void print_diagsums(int *a, int size)
{
	int i;
	int square = size * size;
	int ct, ct2;


	for (i = 0; i < square; i += size + 1)
	{
		/*print sum of every point we parsed through*/
		ct += a[i];
	}

	for (i = size - 1; i < square; i = i + size - 1)
	{
		/*print sum of every point we parsed through*/
		ct2 += a[i];
	}

	printf("%i, %i \n", ct, ct2);

}

