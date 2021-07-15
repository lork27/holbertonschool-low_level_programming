#include <stdio.h>
#include "holberton.h"
unsigned int _strlen(char *str);


/**
 *string_nconcat - concat two string
 *@s1: string 1
 *@s2: string 2
 *@n: number of bytes of 2 to be concat
 *Return: the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, size;
	char *s3;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	size = _strlen(s1);

	if (n < _strlen(s2))
		size += n;
	else
		size += _strlen(s2);

	s3 = malloc(sizeof(char) * size + 1);
	if (s3 == NULL)
		return (NULL);

	for (size = 0; s1[size] != '\0'; size++)
		s3[size] = s1[size];

	for (i = 0; s2[i] != '\0' && i < n; i++)
	{
		s3[size] = s2[i];
		size++;
	}
	s3[size] = '\0';
	return (s3);
}

/**
 *_strlen - gets string len
 *@str: string to get the length of
 *Return: length of str as int
 */

unsigned int _strlen(char *str)
{
	unsigned int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}
