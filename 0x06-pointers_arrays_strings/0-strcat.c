#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: string of char
 * @src: string of char
 * Return: concatenate value
 */
char *_strcat(char *dest, char *src)
{
	int z, x = 0;
	
	while (src[z]) != '\0')
	{
		dest[x] = src[z];
		z++;
		x++;
	}
	return (dest);
}
