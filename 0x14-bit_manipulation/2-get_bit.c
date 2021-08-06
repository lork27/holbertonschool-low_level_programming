#include "main.h"

/**
 *get_bit - returns value of a bit at a given index
 *@n: integer to be checked
 *@index: which bit we want to check
 *Return: index bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bin;

	if (index > sizeof(n) * 8)
		return (-1);

	for ( ; index > 0; index--)
	{
		bin = n >> index;
		if (bin & 1)
			return (1);
	}
	return (0);
}

