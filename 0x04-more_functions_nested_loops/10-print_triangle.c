#include "holberton.h"

/**
 *print_triangle - function
 *@size: parameter
 *
 */

void print_triangle(int size)
{
	int uno, dos;

	if (size > 0)
	{
		for (uno = 1; uno <= size; uno++)
		{
			for (dos = size - uno; dos > 0; dos--)
				_putchar(' ');
			for (dos = 0; dos < uno; dos++)
				_putchar('#');
			if (uno == size)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
