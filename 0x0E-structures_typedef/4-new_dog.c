#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - new dog
 * @name: name
 * @age: age of the dog
 * @owner: owner's dog
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, k;
	dog_t *newdog;

	for (i = 0; name[i] != '\0'; i++)

	for (j = 0; owner[j] != '\0'; j++)

	newdog = malloc(sizeof(dog_t));
		if (newdog == NULL)
		{
			free(newdog);
			return (NULL);
		}
	newdog->name = malloc(sizeof(newdog->name) * i);
		if (newdog->name == NULL)
		{
			free(newdog->name);
			free(newdog);
			return (NULL);
		}
	for (k = 0; k < i; k++)
		newdog->name[k] = name[k];

	newdog->age = age;

	newdog->owner = malloc(sizeof(newdog->owner) * j);
		if (newdog->owner == NULL)
		{
			free(newdog->owner);
			free(newdog->name);
			free(newdog);
		}
	for (k = 0; k < j; k++)
		newdog->owner[k] = owner[k];

	return (newdog);
}
