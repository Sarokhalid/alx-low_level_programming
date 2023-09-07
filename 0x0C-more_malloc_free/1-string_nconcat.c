#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * *string_nconcat - hfxz
 * @s1: bvxx
 * @s2: jgccx
 * @n: bvcxx
 * Return: bvczz
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *r;
	size_t s1l, s2l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1l = strlen(s1);
	s2l = strlen(s2);
	if (n >= s2l)
		n = s2l;
	r = (char *)malloc((s1l + n + 1) * sizeof(char));
	if (r == NULL)
		return (NULL);
	strncpy(r, s1, s1l);
	strncpy(r + s1l, s2, n);
	r[s1l + n] = '\0';
	return (r);
}
