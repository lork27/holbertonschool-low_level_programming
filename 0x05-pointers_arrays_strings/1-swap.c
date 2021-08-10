#include "holberton.h"

/**
 *swap_int - swaps the value of two integers
 *@a: the first int it takes
 *@b: the second one that will swap value with the first one
 */

void swap_int(int *a, int *b)
{
	int storea = *a;
	int storeb = *b;
	*a = storeb;
	*b = storea;
}
