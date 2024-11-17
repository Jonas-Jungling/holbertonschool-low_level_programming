#include "dog.h"
#include <stddef.h>

/**
 * init_dog - a dog's basic info
 * description: Longer description
 * @d: struct dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
