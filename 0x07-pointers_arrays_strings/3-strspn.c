#include "holberton.h"
#include <stddef.h>
/**
*_strspn - ffinds length of a prefix
*@s: where we look for similarities
*@accept: where the similarities could be
*Return: the number of times the external loop runs
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, ct;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (ct = 0; accept[ct] != s[i]; ct++)
		{
			if (accept[ct] == '\0')
			{
				return (i);
			}
		}
	}
	return (i);
}
