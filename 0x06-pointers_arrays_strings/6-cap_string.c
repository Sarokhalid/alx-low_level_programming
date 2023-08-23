#include "main.h"
/**
 * cap_string - cap
 * @s: ghh
 * Return: value
 */
char *cap_string(char *s)
{
	char *p = s;
	int d = 1;

	while (*s)
	{
		if (is Delimiter(*s))
			d = 1;
		else if (isLower(*s) && d)
		{
			*s = 32;
			d = 0;
		}
		else
			d = 0;
		s++
	}
	return (p);
}
