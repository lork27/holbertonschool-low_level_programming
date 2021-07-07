#include "holberton.h"

/**
 *_strlen_recursion - checks length of string
 *@s: the string is going to check the length of
 *Return: length of str
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
