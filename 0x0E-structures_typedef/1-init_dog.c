#include "dog.h"
#include <stdlib.h>

/**
 *init_dog - initializes a variable type
 * @d: pointer to struct
 * @name: pointer to parameter of name
 * @age: pointer to parameter of age
 * @owner: pointer to parameter of owner
 *
 * Return: nothing.
**/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
