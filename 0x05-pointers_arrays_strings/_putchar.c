#include <unistd.h>
/**
 * _putchar - print char
 * @c: character
 * Return: 1 if Success . -1 if error
 */
int _putchar(char c)
{
	return (write(1, &c, 1);
}
