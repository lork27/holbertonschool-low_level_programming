#include "holberton.h"

/**
 *more_numbers - print 1-14 10 times
 *
 */

void more_numbers(void)
{
	int diez;
	int cator;

	for (diez = 0; diez < 10; diez++)
	{
		for (cator = 0; cator < 15; cator++)
		{
			if (cator > 9)
			{
			_putchar(cator / 10 + '0');
			}
			_putchar(cator % 10 + '0');
		}
	_putchar('\n');
	}
}
