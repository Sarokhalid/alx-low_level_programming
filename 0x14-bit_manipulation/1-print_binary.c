#include "main.h"
/**
 * _putchar - bgfxx
 * @c: bvvc
 * Return: jvcc
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_binary - hgfdd
 * @n: jhggcc
 */
void print_binary(unsigned long int n)
{
	int z;
	unsigned long int m;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	m = 1UL << ((sizeof(unsigned long int) * 8) - 1);
	z = 1;
	while (m > 0)
	{
		if ((n & m) == 0)
		{
			if (!z)
			{
				_putchar('0');
			}
		}
		else
		{
			z = 0;
			_putchar('1');
		}
		m >>= 1;
	}
}

