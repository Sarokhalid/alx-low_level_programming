#include <unistd.h>
/**
 * _putchar - print char
 * @c: character
 * Return: integer
 */
int _putchar(char c)
{ 
	return (write(1, &c, 1));
}

