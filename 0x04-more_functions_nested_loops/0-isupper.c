#include "holberton.h"

/**
 *_isupper - function that takes an in and checks for uppercase
 *@c: the int it takes
 *Return: 1 if upper else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
