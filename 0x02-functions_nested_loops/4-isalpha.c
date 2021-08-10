#include "holberton.h"
/**
 *_isalpha - checks for lowercase character
 * Return: 0
 * @c: the number we pass the function to compare it
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
