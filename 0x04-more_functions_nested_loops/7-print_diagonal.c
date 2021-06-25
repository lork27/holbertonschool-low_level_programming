#include "holberton.h"
/**
 *print_diagonal - prints lines
 *@n: the number you pass the func
 *
 */
void print_diagonal(int n)
{
	int i;
	int w;

	if (n > 0)
	{
		for (w = 0; w < n; w++)
		{
			for (i = 0 ; i < w ; i++)
				_putchar(' ');
			_putchar('\\');
			if (w == n - 1)
				continue;
				_putchar('\n');
		}
	}
	_putchar('\n');
}
