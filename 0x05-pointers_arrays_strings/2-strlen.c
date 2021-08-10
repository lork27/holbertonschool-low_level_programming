#include "holberton.h"
/**
 *_strlen - funct that gives you the lentgh of an string
 *@s: the string we pass
 *Return: the number of times it looped
 */
int _strlen(char *s)
{
	int index = 0;

	while (s[index] != ('\0'))
	{
		index++;
	}
	return (index);
}
