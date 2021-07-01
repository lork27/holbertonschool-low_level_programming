#include "holberton.h"
/**
 **_strncpy - copies a string to another
 *@dest: destination array
 *@src: origin array
 *@n: number of bytes
 *Return: the string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int idx;

	for (idx = 0; idx < n && src[idx] != '\0'; idx++)
	{
		dest[idx] = src[idx];
	}

	for ( ; idx < n; idx++)
	{
		dest[idx] = '\0';
	}
	return (dest);
}
