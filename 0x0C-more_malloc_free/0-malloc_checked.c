#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *malloc_checked - bvcxxx
 * @b: jbccx
 * Return: p value
 */
void *malloc_checked(unsigned int b)
{
	void *p;
	const char *c;
	const char *em;

	p = malloc(b);
	if (p == NULL)
	{
		em = "faild to allocate memory \n";
		c = em;
		while (*c != '\0')
		{
			_putchar(*c);
			c++;
		}
		exit(98);
	}
	return (p);
}
