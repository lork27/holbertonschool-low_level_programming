#include "holberton.h"
/**
 *print_rev - prints a given string in reverse
 *@s: the string we pass
 */
void print_rev(char *s)
{
	int index = 0;

	while (s[index] != ('\0'))
	{
		index++;
	}

	for (index = index - 1; index >= 0; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');

}
