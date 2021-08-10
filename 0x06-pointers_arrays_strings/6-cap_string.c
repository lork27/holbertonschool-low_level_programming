#include "holberton.h"
#include <stdio.h>
/**
 *cap_string - convert string to uppercase
 *@str: the parameter string
 *Return: string
 *
 */

char *cap_string(char *str)
{
	int ct, ct2, flag = 1;
	char sep[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}',
		'\n', '\t', ' '};

	for (ct = 0; str[ct] != '\0'; ct++)
	{
		if (flag == 1)
		{
			if (str[ct] >= 97 && str[ct] <= 122)
			{
				str[ct] -= 32;
			}
			flag = 0;
		}
		for (ct2 = 0; sep[ct2] != '\0'; ct2++)
		{
			if (str[ct] == sep[ct2])
			{
				flag = 1;
			}
		}
	}

	return (str);

}
