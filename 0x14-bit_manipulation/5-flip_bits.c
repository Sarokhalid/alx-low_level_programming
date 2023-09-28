#include "main.h"
/**
 * flip_bits - bgfccgh
 * @n: bvcx
 * @m: hvcx
 * Return: bvcc
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int long or = n ^ m;
	unsigned int long c = 0;

	while (or != 0)
	{
		or &= (or - 1);
		c++;
	}
	return (c);
}
