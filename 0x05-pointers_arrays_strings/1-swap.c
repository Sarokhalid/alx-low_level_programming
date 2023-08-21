#include "main.h"
/**
 * swap_int - swap two int
 * @a: firt integer
 * @b: two integer
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
