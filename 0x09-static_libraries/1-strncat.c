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

	b = 0;
	while (dest[b] != '\0')
		b++;
	m = 0;
	while (m < n && src[m] != '\0')
	{
		dest[b] = src[m];
		b++;
		m++;
	}
	dest[b] = '\0';
	return (dest);
}
