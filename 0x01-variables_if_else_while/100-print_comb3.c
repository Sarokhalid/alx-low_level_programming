#include <stdio.h>
/**
 * main - program to print combinations og two digits
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 57; n++)
	{
		for (m = 48; m <= 57; m++)
		{
			if (n >= m)
			{
				continue;
			}
			putchar(n);
			putchar(m);
			if (n == 56 && m == 57)
			{
				continue;
			}
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
