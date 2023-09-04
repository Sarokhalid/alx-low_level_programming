#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - ghgfc
 * @str: hjvvc
 * Return: hjgvc
 */
char *_strdup(char *str)
{
	unsigned int l;
	char *d;

	if (str == NULL)
		return (NULL);
	l = strlen(str);
	d = malloc((l + 1) * sizeof(char));
	if (d == NULL)
		return (NULL);
	strcpy(d, str);
	return (d);
}
