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

	z = 0;
	while (dest[z] != '\0')
		z++;
	x = 0;
	while (src[x] != '\0')
	{
		dest[z] = src[x];
		z++;
		x++;
	}
	dest[z] = '\0';
	return (dest);
}
