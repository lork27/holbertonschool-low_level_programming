#include "holberton.h"
/**
 *print_square - prints a square
 *@size: the number you pass the func
 *
 */
void print_square(int size)
{
	int i, w;

	if (size > 0)
	{
		for (w = 0; w < size; w++)
		{
			for (i = 0 ; i < size ; i++)
				_putchar('#');

			if (w == size - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
