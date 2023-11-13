#include "main.h"
/**
 * _memset - fil memory
 * @s: pointer
 * @b: copy
 * @n: number of copy b
 * Return: pointer to memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int y;

	for (y = 0; y < n; y++)
		s[y] = b;
	return (s);
}
