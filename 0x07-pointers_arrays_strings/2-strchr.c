#include "holberton.h"
#include <stddef.h>
/**
*_strchr - funct that find a char in a string
*@s: where we look for c
*@c: what we are looking for in s
*Return: either if we encounter c in s or null if not
*/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}

	return (NULL);


}
