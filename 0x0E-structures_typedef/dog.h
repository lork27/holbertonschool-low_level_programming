#ifndef DOG
#define DOG
/**
 *struct dog - dog class
 *@name: dog name
 *@age: age of the dog
 *@owner: dog owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /*DOG*/
