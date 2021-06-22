#include "holberton.h"
/**
 *_islower - checks for lowercase character
 * Return: 0
 * @c: the number we pass the function to compare it
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
