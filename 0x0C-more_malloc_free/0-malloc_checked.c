#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *malloc_checked - bvcxxx
 * @b: jbccx
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		fprintf(stderr, "failed to allocate memory\n");
		exit(98);
	}
	return (p);
}
