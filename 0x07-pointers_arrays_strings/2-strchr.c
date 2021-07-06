#include "holberton.h"
#include <stddef.h>
#include <stdio.h>
/**
*_strchr - funct that find a char in a string
*@s: where we look for c
*@c: what we are looking for in s
*Return: either if we encounter c in s or null if not
*/

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			s++;
			return (s);
		}
		s++;
		i++;
	}
	return (NULL);
}

