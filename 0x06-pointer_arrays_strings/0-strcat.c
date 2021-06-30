#include "holberton.h"
/**
 **_strcat - concatenates 2 strings
 *@dest: destination array
 *@src: origin array
 *Return: the string dest
 */

char *_strcat(char *dest, char *src)
{
	int idx, len = 0;

	for (idx = 0; src[idx] != 0 ; idx++)
	{
		len++;
	}

	for (idx = len ; dest[idx] != 0 ; idx++)
	{
		dest[idx] = src[idx];
	}

	return (dest);
}
