#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: string of char
 * @src: string of char
 * Return: concatenate value
 */
char *_strcat(char *dest, char *src)
{
	int z, x;

	while (dest[z])
		z++;
	for (x = 0; src[x]; x++)
		dest[c++] = src[x];
	return (dest);
}
