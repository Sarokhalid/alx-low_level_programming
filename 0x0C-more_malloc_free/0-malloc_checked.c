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
	const char *x;
	const char *em;

	p = malloc(b);
	if (p == NULL)
	{
		em = "faild to allocate memory \n";
		x = em;
		while (*x != '\0')
		{
			_putchar(*x);
			x++;
		}
		exit(98);
	}
	return (p);
}
