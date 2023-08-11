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

	for (n = 48; n <= 57; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			for (l = 50; l <= 57; l++)
			{
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
