#include "holberton.h"
#include  <stdio.h>

/**
*_memset - funct that fills memory
*@s: what we fill
*@b: what we fill with
*@n: the number of times we do it
*Return: pointer to s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}

