#include "holberton.h"

/**
 *_isdigit - function that checks for digits
 *@c: the int it takes
 *Return: 1 if digit else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
