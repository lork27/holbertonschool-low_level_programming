#include "main.h"

/**
 *print_binary - converts decimal to binary
 *@n: integer to be converted
 */

void print_binary(unsigned long int n)
{
	unsigned int mask = 32768;
	while (mask > 0)
	{
		if ((n & mask) == 0)
			_putchar('0');
		else
			_putchar('1');
	mask = mask >> 1;
	}
}
