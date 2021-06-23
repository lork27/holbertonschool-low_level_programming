#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - func that print a x number to y(98) value
 * @n: the number we pass to the function
 */

void print_to_98(int n)
{

	if (n < 98)
	{
		int i;

		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				printf(" %d,", i);
			}
			else
			{
				printf(" %d", i);
			}
		}
		putchar('\n');
	}
	else
	{
		int m;

		for (m = n; m >= 98; m--)
		{
			if (m != 98)
			{
				printf(" %d,", m);
			}
			else
			{
				printf(" %d", m);
			}
		}
		putchar('\n');
	}

}
