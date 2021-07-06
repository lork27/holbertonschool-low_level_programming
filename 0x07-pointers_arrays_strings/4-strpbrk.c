#include "holberton.h"
#include <stddef.h>
/**
 *_strpbrk - funct that find a char in a string
 *@s: where we look for c
 *@accept: what we are looking for in s
 *Return: either if we encounter c in s or null if not
 */

char *_strpbrk(char *s, char *accept)
{
	int ct, ct2;

	for (ct = 0; s[ct] != '\0'; ct++)
	{
		for (ct2 = 0; accept[ct2] != '\0'; ct2++)
		{
			if (accept[ct2] == s[ct])
			{
				return (&s[ct]);
			}
		}
	}

	return (NULL);

}
