#include <stdlib.h>
#include <stdio.h>
/**
 *malloc_checked - function name
 *@b: positive number it takes
 *Return: void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p =	malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
