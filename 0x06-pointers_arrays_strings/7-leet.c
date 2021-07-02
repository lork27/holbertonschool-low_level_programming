#include "holberton.h"
/**
 *leet - leetifies string
 *@str: the string argument it gets
 *Return: the string modified
 */

char *leet(char *str)
{
	int aeotl[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int leet[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int ct = 0;
	int ct2;

	while (str[ct] != '\0')
	{
		for (ct2 = 0; aeotl[ct2] != '\0'; ct2++)
		{
			if (str[ct] == aeotl[ct2])
			{
				str[ct] = leet[ct2];
			}
		}
		ct++;
	}
	return (str);
}
