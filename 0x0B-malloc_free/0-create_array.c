#include <stdlib.h>
#include "holberton.h"

/**
 *create_array - creates array with specific initial char
 *@size: size of the array
 *@c: the first character
 *Return: string
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;
	s = malloc((size) * sizeof(char));

	if(size == 0)
	{
		return (NULL);
	}


	i = 0;

	while (i < size)
	{
		s[i] = c;
		i++;
	}

	s[i] = '\0';
	return (s);


}
