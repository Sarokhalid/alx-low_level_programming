#include "main.h"
/**
 * _strchr - locate character in string
 * @s: string
 * @c: character
 * Return: Null. pointer to firt ocurance
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
