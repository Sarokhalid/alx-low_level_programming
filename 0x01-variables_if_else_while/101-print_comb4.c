#include <stdio.h>
/**
 * main - code to print combinations of three digits
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int m;
	int l;

	for (n = 48; n <= 55; n++)
	{
		for (m = 49; m <= 56; m++)
		{
			for (l = 50; l <= 57; l++)
			{
				if (n < m && m > l)
				{
					continue;
				}
				if (n >= m && n >= l)
				{
					continue;
				}
				if (n >= m && m >= l)
				{
					continue
						;
				}
				if (n > m && m < l)
					continue;
				if (n == m || m == l || n == l)
				{	continue;
				}
				putchar(n);
				putchar(m);
				putchar(l);
				if (n == 55 && m == 56 && l == 57)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
