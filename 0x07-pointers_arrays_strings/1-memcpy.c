#include "holberton.h"

/**
*_memcpy - funct that fills memory
*@dest: what we fill
*@src: what we fill with
*@n: the number of times we do it
*Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

