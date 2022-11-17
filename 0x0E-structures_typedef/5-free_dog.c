#include "dog.h"
#include <stdio.h>

/**
 * free_dog - free dog
 * @d: dog to be freed
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
