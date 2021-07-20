#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *new_dog - initializes variable of type struct dog
 *@name: name of the new dog
 *@age: age of the dog
 *@owner: owner of the dog
 *@return: dog_t
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
