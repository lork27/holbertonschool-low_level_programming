#include "holberton.h"
#include <stdio.h>
/**
 *string_toupper - convert string to uppercase
 *@str: the parameter string
 *Return: string
 *
 */

char *string_toupper(char *str)
{
	int ct = 0;

	while (str[ct] != '\0')
	{
		if (str[ct] >= 97 && str[ct] <= 122)
		{
			str[ct] = str[ct] - 32
		}

		ct++;
	}

	return (str);

}
