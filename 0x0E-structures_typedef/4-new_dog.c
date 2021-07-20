#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

/**
 *new_dog - initializes variable of type struct dog
 *@name: name of the new dog
 *@age: age of the dog
 *@owner: owner of the dog
 *Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	char *nowner;
	char *nname;

	if (name == NULL)
		return (NULL);
	if (owner == NULL)
		return (NULL);

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);
	nname = malloc((_strlen(name) + 1));
	if (nname == NULL)
	{
		free(newdog);
		return (NULL);
	}
	nowner = malloc((_strlen(owner) + 1));
	if (nowner == NULL)
	{
		free(nname);
		free(newdog);
		return (NULL);
	}
	nname = _strcpy(nname, name);
	nowner = _strcpy(nowner, owner);
	newdog->name = nname;
	newdog->owner = nowner;
	newdog->age = age;

	return (newdog);
}

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

/**
 * *_strcpy - function
 * @dest: parameter
 * @src: parameter
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int idx, len = 0;

	for (idx = 0 ; src[idx] != 0 ; idx++)
	{
		len++;
	}

	for (idx = 0 ; idx <= len ; idx++)
	{
		dest[idx] = src[idx];
	}

	return (dest);
}
