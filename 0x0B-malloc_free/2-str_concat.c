#include <stdlib.h>
#include "holberton.h"
/**
 *str_concat - concat 2 strings
 *@s1: string to recieve s2
 *@s2: string to be added to s1
 *Return: new string concat string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j;
	unsigned int len1, len2, total;
	char *s;

	len1 = 0, len2 = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	total = len1 + len2;
	s = malloc(total * sizeof(char) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		s[i] = s1[i];
	}
	for (j = len1, i = 0; s2[i] != '\0' ; j++, i++)
	{
		s[j] = s2[i];
	}
	s[total] = '\0';
	return (s);
}
