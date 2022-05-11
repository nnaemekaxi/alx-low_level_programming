#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int ndog, odog, x;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (ndog = 0; name[ndog]; ndog++)
		;
	ndog++;
	dog->name = malloc(ndog * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (x = 0; x < ndog; x++)
		dog->name[x] = name[x];
	dog->age = age;
	for (odog = 0; owner[odog]; odog++)
		;
	odog++;
	dog->owner = malloc(odog * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (x = 0; x < odog; x++)
		dog->owner[x] = owner[x];
	return (dog);
}
