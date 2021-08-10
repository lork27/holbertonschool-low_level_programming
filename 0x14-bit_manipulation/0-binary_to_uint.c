#include "main.h"

/**
 *binary_to_uint - convert binary to int
 *@b: pointer to string of 01
 *Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result = result << 1;
			result += b[i] - '0';
		}
		else
			return (0);
	}
	return (result);
}
