#include "main.h"
/**
 * reverse_array - reversing
 * @a: int point
 * @n: integer
 */
void reverse_array(int *a, int n)
{
	int s, d, f;

	for (s = 0; d = (n - 1); s < d; s++; d--)
	{
		f = a[s];
		a[s] = a[d];
		a[d] = f;
	}
}
