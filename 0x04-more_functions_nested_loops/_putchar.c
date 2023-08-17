#include "main.h"
/**
 * _putchar - write charcter c
 * @c: character to print
 * Return: 1 if success. -1 if error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
