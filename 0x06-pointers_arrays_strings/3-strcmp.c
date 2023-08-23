#include "main.h"
/**
 * _strcmp - compare
 * @s1: string of cgar
 * @s2: string of char
 * Return: value
 */
int _strcmp(char *s1, char *s2)
{
	int q = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			q = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (q);
}
