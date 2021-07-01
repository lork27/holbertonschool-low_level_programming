#include "holberton.h"
/**
 *_strcmp - function
 *@l1: first array
 *@l2: second array
 */

int _strcmp(char *s1, char *s2)
{
	int l1 = 0;
	int l2 = 0;
	int i;

	while (s1[l1] != '\0')
	{
		l1++;
	}
	while (s2[l2] != '\0')
	{
		l2++;
	}

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return(s1[i] - s2[i]);
		}

		if (s1[i] == s2[i])
		{
			return(i);
		}

	}

}

