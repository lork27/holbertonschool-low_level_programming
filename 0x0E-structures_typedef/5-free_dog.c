#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *free_dog - free dog
 *@d: struct to be freed
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
