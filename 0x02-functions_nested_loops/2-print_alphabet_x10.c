#include <stdio.h>
#include "holberton.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times with just 2 putchar
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int c;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a' ; c <= 'z' ; c++)
		{
			_putchar (c);
		}
		_putchar ('\n');
	}
}
