#include "holberton.h"
/**
 **_strncat - concatenates 2 strings until n
 *@dest: destination array
 *@src: origin array
 *@n: number of bytes
 *Return: the string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int idx, idx2;

	for (idx = 0; dest[idx] != '\0' ; idx++)
	;

	for (idx2 = 0 ; src[idx2] != '\0' && idx2 <= n - 1 ; idx2++, idx++)
	{
		dest[idx] = src[idx2];
	}

	return (dest);
}
