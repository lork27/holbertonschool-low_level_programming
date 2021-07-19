#include <stdio.h>
#include "dog.h"

/**
 *print_dog - prints struct
 *@d: the struct to be printed
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("owner: %s\n", d->owner);
}
