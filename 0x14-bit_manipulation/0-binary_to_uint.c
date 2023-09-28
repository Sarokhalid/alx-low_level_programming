#include "main.h"
/**
 * binary_to_uint - hgfghjjjjj
 * @b: hggcc
 * Description: hvcxxz
 * Return: bgvccx
 */
unsigned int binary_to_uint(const char *b)
{
	size_t i;
	size_t l;
	unsigned int r;

	if (b == NULL)
		return (0);
	l = strlen(b);
	r = 0;
	for (i = 0; i < l; i++)
	{
		if (b[i] == '0')
			r = (r << 1);
		else if (b[i] == '1')
			r = (r << 1) | 1;
		else
			return (0);
	}
	return (r);
}
