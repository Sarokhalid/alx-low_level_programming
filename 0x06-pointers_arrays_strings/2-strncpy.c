#include "main.h"




char *_strncpy(char *dest, char *src, int n)
{
	int y;

	for (y = 0; y < n && str[y] != '\0'; y++)
		dest[y] = src[y];
	while ( i < n)
	{
		dest[y] = '\0';
		y++;
	}
	return (dest);
}
