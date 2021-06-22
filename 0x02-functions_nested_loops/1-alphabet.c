#include <stdio.h>
#include "holberton.h"
/**
 * print_alphabet - prints the alphabet with just 2 putchar
 * Return: 0
 */

void print_alphabet(void)
{
	int c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		_putchar (c);
	}
	_putchar ('\n');
}
