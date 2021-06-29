#include "holberton.h"
/**
 *puts2 - prints a given string in reverse
 *@str: the string we pass
 */
void puts2(char *str)
{
	int length, i;

	for (length = 0; str[length] != '\0'; length++)
	{
		continue;
	}

	for (i = 0; i < str[i]; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
