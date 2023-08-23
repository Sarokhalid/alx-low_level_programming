#include "main.h"
/**
 * string_toupper - to upper
 * @str: string
 * Return: value
 */
char *string_toupper(char *str)
{
	int t;

	for (t = 0; str[t] != '\0'; t++)
	{
		if (str[t] >= 97 && str[t] <= 122)
			str[t] = str[t] - 32;
	}
	return (str);
}

