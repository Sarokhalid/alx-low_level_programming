#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *_calloc - bgcxx
 * @nmemb: gfssdg
 * @size: nvccx
 * Return: hgxxz
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned char *bytePtr;
	void *ptr;
	const char em[];
	const char *d;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		em[] = "Failed to allocate memory\n";
		d = em;
		while (*d != '\0')
		{
			putchar(*d);
			d++;
		}
		return (NULL);
	}

	bytePtr = (unsigned char *)ptr;
	for (i = 0; i < nmemb * size; i++)
	bytePtr[i] = 0;

	return (ptr);
}
