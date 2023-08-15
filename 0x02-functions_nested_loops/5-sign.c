#include "main.h"
/**
 * print_sign - print sing + or -
 * @n: number  in Ascci code
 * Return: 1 if n pisitive . 0 if n zero . -1 if negetive
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
}
