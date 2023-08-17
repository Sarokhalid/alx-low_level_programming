#include "main.h"
/**
 * _isupper - check the alphabet character
 * @c: char Ascii code
 * Return: 1 if c is uppercase .0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{	
		return (1);
	}
	else
		return (0);
}
