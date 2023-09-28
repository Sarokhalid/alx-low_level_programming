#include "main.h"
/**
 * set_bit - hgfdx
 * @n: hggff
 * @index: nbvcc
 * Return: bvcc
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	m = 1UL << index;
	*n |= m;
	return (1);
}
