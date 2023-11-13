#include "main.h"
/**
 * _memcpy - copy
 * @dest: memory
 * @src: memiry
 * @n: copies
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int y = 0;

	while (y < n)
	{
		dest[y] = src[y];
		y++;
	}
	return (dest);
}
