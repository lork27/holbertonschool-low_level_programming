#include "holberton.h"
#include <stdio.h>
/**
 *print_array - prints array n number of times
 *@a: the array
 *@n: the times it gets printed
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
		i++;
	}

putchar('\n');
}
