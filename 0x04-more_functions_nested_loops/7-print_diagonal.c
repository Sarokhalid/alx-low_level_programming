#include "main.h"
/**
 * print_diagonal - print in digonal \
 * @n: number input
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	int i;
	int j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (i == j)
				_putchar('\\');
		}
		_putchar('\n');
	}
}
