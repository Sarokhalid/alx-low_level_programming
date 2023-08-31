#include "main.h"
/**
 * *move - move
 * @s2: string
 * Return: value check
 */
char *move(char *s2)
{
	if (*s2 == '*')
		return (move(s + 1));
	else
		return (s2);
}
/**
 * incep - check
 * @s1: string
 * @s2: string
 * Return: value
 */
int incep(char *s1, char *s2)
{
	int r = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		r += wildcmp(s1 + 1, s2 + 1);
	r += incep(s1 + 1, s2);
	return (r);
}
/**
 * wildcmp - ghhjj
 * @s1: string
 * @s2: string
 * Return: 1. 0
 */
int wildcmp(char *s1, char *s2)
{
	int r = 0;

	if (!*s1 && s2 == '*' && !*move(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = move(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			r += wildcmp(s1 + 1, s2 + 2);
		r += incep(s1, s2);
		return (!!r);
	}
	return (0);
}



