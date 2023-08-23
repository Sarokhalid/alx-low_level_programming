#include "main.h"
/**
 * _strncat - print concatenate
 * @dest: string of charracter
 * @src: string of character
 * @n: ineger
 * Return: concatenate value
 */
char *_strncat(char *dest, char *src, int n)
{
	int b, m;

	while (dest[b])
		b++;
	for (m = 0; m < n && src[m] != '\0'; m++)
		dest[b + m] = src[m];
	dest[b + m] = '\0';
	return (dest);
}
