#include "main.h"
/**
 * _isalpha - check the letter lower or upper or not
 * @c: char in ASCI code
 * Return: 1 if c letter . 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122 || c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
