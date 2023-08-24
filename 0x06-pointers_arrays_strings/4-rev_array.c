#include "main.h"
/**
 * reverse_array - reversing
 * @a: int point
 * @n: integer
 */
void reverse_array(int *a, int n)
{
	int s, d;

	for (s = 0; s < n--; s++)
	{
		d = a[s];
		a[s] = a[n];
		a[n] = d;
	}
}
