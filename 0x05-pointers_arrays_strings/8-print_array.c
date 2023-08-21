#include "main.h"
/**
 * print_array - print array
 * @a: character of parameter
 * @n: number of elemnts to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
			printf("%d", a[i]);
	}
	_putchar('\n');
}
