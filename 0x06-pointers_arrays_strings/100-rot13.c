#include "holberton.h"
/**
 *leet - leetifies string
 *@str: the string argument it gets
 *Return: the string modified
 */

char *rot13(char *str)
{
	char *arr[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz",
					"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};
	int ct = 0;
	int ct2;

	while (str[ct] != '\0')
	{
		for (ct2 = 0; *(arr[0] + ct2) != '\0'; ct2++)
		{
			if (str[ct] == *(arr[0] + ct2))
			{
				str[ct] = *(arr[1] + ct2);
				break;
			}
		}
		ct++;
	}
	return (str);
}
