#include <stdio.h>
#include "dog.h"

/**
 *init_dog - initializes variable of type struct dog
 *@d: the struct
 *@name: name of the new instance
 *@age: age of the dog
 *@owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
