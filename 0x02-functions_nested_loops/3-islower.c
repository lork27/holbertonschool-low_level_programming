#include <stdio.h>
#include <ctype.h>
#include "holberton.h"
/**
 *_islower - checks for lowercase character
 * Return: 0
 */
int _islower(int c)
{
	if (islower(c) == 1)
	{;
		return (1);
	}
	else
	{
		return (0);
	}
}
