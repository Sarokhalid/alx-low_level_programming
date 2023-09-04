#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - hcccc
 * @s1: bvc
 * @s2: bvx
 * Return: czcbb
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int l1, l2, clen;
	char *conc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = strlen(s1);
	l2 = strlen(s2);
	clen = l1 + l2 + 1;
	conc = malloc(clen * sizeof(char));
	if (conc == NULL)
		return (NULL);
	strcpy(conc, s1);
	strcat(conc, s2);
	return (conc);
}
