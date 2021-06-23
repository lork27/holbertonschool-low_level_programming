#include "holberton.h"
/**
 * times_table - function that prints minutes of the day
 * Return: void nothing
 *
 */
void times_table(void)
{
	int hstart, mstart;

	for (hstart = 0; hstart <= 9 ; hstart++)
	{
		for (mstart = 0; mstart <= 9 ; mstart++)
		{
			_putchar('0' * 9);
			_putchar(':');
			_putchar('0' * 10);
			_putchar('\n');
		}
	}
}
