#include "holberton.h"
/**
 *_puts - prints a string to the stdout
 *@str: the string we pass
 *
 */

void _puts(char *str)
{

	while (*str != ('\0'))
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
