#include "dog.h"
#include <stdio.h>

/**
 * init_dog - function that initializes a variable
 * @d: variable
 * @name: 1st member
 * @age: 2nd memner
 * @owner: 3rd member
 * Return: d
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *d;

	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
