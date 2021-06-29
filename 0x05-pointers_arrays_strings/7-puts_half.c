#include "holberton.h"
/**
 *puts_half - prints a given string in reverse
 *@str: the string we pass
 */
void puts_half(char *str)
{
	int i, n;
	int len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	if (len % 2 == 0)
	{
		n = len / 2;
	}
	if (len % 2 != 0)
	{
		n = ((len - 1) / 2 + 1);
	}

	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
