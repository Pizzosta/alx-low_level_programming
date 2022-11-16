#ifndef _STRUCT_DOG_
#define _STRUCT_DOG_

/**
 * struct dog - info of a dog
 * @name: 1st member
 * @age: 2nd member
 * @owner: 3rd member
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/*dog_t - new name forstruct dog */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
