#include "dog.h"
/**
 * init_dog - bvcx
 * @d: nkhg
 * @name: bvcc
 * @age: bbvcc
 * @owner: bbvc
 * Return: bcc
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

