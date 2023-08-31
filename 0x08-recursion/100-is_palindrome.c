#include "main.h"
/**
 * last_index - print last
 * @s: string
 * Return: last
 */
int is_palindrome(char *s);
int check(char *s, int str, int end, int mod);
int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += last_index(s + 1) + 1;
	return (n);
}
/**
 * is_palindrome - print planid
 * @s: string
 * Return: 1. 0
 */
int is_palindrome(char *s)
{
	int end = last_index(s);

	return (check(s, 0, end - 1, end % 2));
}
/**
 * check - check the string
 * @s: string
 * @str: start
 * @end: end string
 * @mod: mod
 * Return: check value
 */
int check(char *s, int str, int end, int mod)
{
	if ((str == end && mod != 0) || (str == end + 1 && mod == 0))
		return (1);
	else if (s[str] != s[end])
		return (0);
	else
		return (check(s, str + 1, end - 1, mod));
}
