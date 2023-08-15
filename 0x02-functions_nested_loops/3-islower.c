#include <main.h>
/**
 * _islower - check lower case
 * @c: is character in ASCI code
 * Return: 1 for lowercase. 0 for rest
 */
int _islower(int c)
{
	int c;

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
