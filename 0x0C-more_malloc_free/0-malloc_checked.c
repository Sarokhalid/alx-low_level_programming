#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - bvcxxx
 * @b: jbccx
 * Return: p value
 */
void *malloc_checked(unsigned int b)
{
	void *p;
	
	p = malloc(b);
	if (p == NULL)
	{
		_putchar('E');
		_putchar('\n');
		exit(98);
	}
	return (p);
}

