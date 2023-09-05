#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * strtom - hgfxx
 * @str: bvcx
 * Return: bgfx
 */
int cw(char *str);
char exw(char *str, int s, int e);
char **strtow(char *str)
{
	int nw, i;
	int e = 0;
	int s = 0;
	int wi = 0;
	char **w;
	
	if (str == NULL || *str == '\0')
		return (NULL);
	nw = cw(str);
	if (nw == 0)
		return (NULL);
	w = (char **)malloc(sizeof(char *) * (nw + 1));
	if (w == NULL)
		return (NULL);
	while (*str != '\0')
	{
		if (*str == ' ')
		{
			str++;
			continue;
		}

		s = e;
		while (*str != ' ' && *str != '\0')
		{
			e++;
			str++;
		}
		w[wi] = exw(str, s, e);

		if (w[wi] == NULL)
		{
			for (i = 0; i < wi; i++)
				free(w[i]);
			free(w);
			return (NULL);
		}
		wi++;
	}
	w[wi] = NULL;
	return (w);
}
/**
 * cw - bvcc
 * @str: nbvc
 * Return: bgc
 */
int cw(char *str)
{
	int c = 0;
	int ws = 0;

	while (*str != '\0')
	{
		if (*str == ' ')
			ws = 0;
		else if (ws == 0)
		{
			ws = 1;
			c++;
		}
		str++;
	}
	return (c);
}
/**
 * exw - bvcx
 * @str: hvcc
 * @s: nbvc
 * @e: bvvc
 * Return: nvc
 */
char exw(char *str, int s, int e)
{
	int l;
	char *r;

	l = e - s;
	r = (char *)malloc(sizeof(char) * (l + 1));

	if (r == NULL)
		return (NULL);
	strncpy(r, &str[s], l);
	r[l] = '\0';
	return (r);
}

