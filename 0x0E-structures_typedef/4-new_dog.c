#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - bvcxxgn
 * @name: bvccchj
 * @age: hggcx
 * @owner: bbvcxx
 * Return: bcxz
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog = (dog_t *)malloc(sizeof(dog_t));

	if (ndog == NULL)
		return (NULL);
	ndog->name = (char *)malloc(strlen(name) + 1);
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog->owner = (char *)malloc(strlen(owner) + 1);
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	strcpy(ndog->name, name);
	strcpy(ndog->owner, owner);
	ndog->age = age;
	return (ndog);
}
