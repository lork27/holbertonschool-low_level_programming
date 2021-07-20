#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

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

	nowner = "";
	nname = "";
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);
	nname = strcpy(nname, name);
	if (nname == NULL)
	{
		free(newdog);
		return (NULL);
	}
	nowner = strcpy(nowner, owner);
	if (nowner == NULL)
	{
		free(nname);
		free(newdog);
		return (NULL);
	}
	newdog->name = nname;
	newdog->owner = nowner;
	newdog->age = age;

	return (newdog);
}
