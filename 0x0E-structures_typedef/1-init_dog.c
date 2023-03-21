#include <stdlib.h>
#include "dog.h"

/**
* init_dog - initialize variable dog of struct type
* @d: struct name
* @name: dog name
* @age: age of dog
* @owner: owner of dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
