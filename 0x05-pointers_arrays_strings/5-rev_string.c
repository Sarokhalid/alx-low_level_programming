#include "main.h"
/**
 * rev_string - print string in reverse
 * @s: character of parameter
 */
void rev_string(char *s)
{
	int x, g;
	char t;

	for (x = 0; *s != '\0'; s++)
		;
	for (g = 0; g < x / 2; g++)
	{
		t = s[g];
		s[g] = s[x - 1 - g];
		s[x - 1 - g] = t;
	}
}
