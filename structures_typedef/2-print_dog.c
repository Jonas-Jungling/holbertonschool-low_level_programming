#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
* print_dog - print a struct dog
* description: print a struct dog
* @d: struct dog
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
	return;

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
