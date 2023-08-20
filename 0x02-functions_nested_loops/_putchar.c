#include "main.h"
#include <unistd.h>
/**
 * _putchar - print char
 * Return: 1 success . -1 error
 * @c: char
 */
int _putchar( char c)
{
	return (write(1, &c, 1));
}
