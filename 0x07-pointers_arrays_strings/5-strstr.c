#include "holberton.h"
#include <stdio.h>
/**
 *_strstr - funct that find a char in a string
 *@haystack: where we look for c
 *@needle: what we are looking for in s
 *Return: either if we encounter c in s or null if not
 */

char *_strstr(char *haystack, char *needle)
{
	int ct, ct2;
	int ct3 = 0;

	while (needle[ct3] != '\0')
	{
		ct3++;
	}

	for (ct = 0; haystack[ct] != '\0'; ct++)
	{
		for (ct2 = 0; needle[ct2] != '\0'; ct2++)
		{
			if (haystack[ct + ct2] != needle[ct2])
			{
				break;
			}
		}
		if (ct2 == ct3)
		{
			return (&(haystack[ct]));
		}
	}

	return (NULL);
}
