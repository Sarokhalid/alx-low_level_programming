#include "dog.h"
/**
 * print_dog - nvvcxx
 * @d: bvcxx
 * Return: bgfxx
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("%s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("%d\n", d->age);
	printf("%s\n", (d->breed != NULL) ? d->breed : "(nil)");
}
