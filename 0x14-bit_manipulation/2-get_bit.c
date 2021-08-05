#include "main.h"

/**
 *get_bit - returns value of a bit at a given index
 *@n: integer to be checked
 *@index: which bit we want to check
 *Return: index bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/*
	 *convert n to binary until index
	 *return that bit number
	 *if index bigger than number of number in n return -1
	 */
	unsigned int bin;

	for ( ; index > 0; index--)
	{
		bin = n >> index;
		if (bin & 1)
			return (1);
	}
	return (0);
}

