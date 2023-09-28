#include "main.h"
/**
 * clear_bit - hgfdss
 * @n: hgcx
 * @index: bgccc
 * Return: jvcj
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	m = 1UL << index;
	*n &= ~m;
	return (1);
}
