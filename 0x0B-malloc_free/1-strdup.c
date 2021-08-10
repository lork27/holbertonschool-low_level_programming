#include <stdlib.h>
#include "holberton.h"
#include "stdio.h"

/**
 *_strdup - creates array from newly created space in memory
 *@str: string to be duplicated
 *Return: new string
 */

char *_strdup(char *str)
{
	unsigned int i;
	char *s;
	unsigned int len;

	len = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}

	s = malloc((len + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}


	i = 0;
	while (i < len)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';

	return (s);


}
