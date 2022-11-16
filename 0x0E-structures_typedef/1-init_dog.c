#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - function that initializes a variable
 * @d: variable
 * @name: 1st member
 * @age: 2nd memner
 * @owner: 3rd member
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
