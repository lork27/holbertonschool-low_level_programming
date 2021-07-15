#include <stdio.h>
#include "holberton.h"
unsigned int _strlen(char *str);

/**
 *_calloc - alloc mem for an array
 *@nmemb: number of elements of the array
 *@size: size in bytes of each element of the array
 *Return: void pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *r;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	r = malloc((sizeof(char) * nmemb) * size);
	if (r == NULL)
		return (NULL);
	return (r);
}
