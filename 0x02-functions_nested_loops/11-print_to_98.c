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
			printf("%d", i);
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
	else
	{
		int m;

		for (m = n; m >= 98; m--)
		{
			printf("%d", m);
			if (m != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}

}
