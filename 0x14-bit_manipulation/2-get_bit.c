#include "main.h"
/**
 * get_bit - hgfxx
 * @n: bvc
 * @index: bvcx
 * Return: jggf
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m;

	unsigned int long r;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	m = 1UL << index;
	r = n & m;
	return ((r != 0) ? 1 : 0);
}
