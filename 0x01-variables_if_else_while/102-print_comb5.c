#include <stdio.h>
/**
 * main - programe to print combinatons of two two digits
 * Return: 0 (Success)
 */
int main(void)
{
	int n, m, l, p;

	for (n = 45; n <= 9; n++)
	{
		for (m = 45; m <= 9; m++)
		{
			putchar(n);
			putchar(l);
			putchar(',');
		}
	}
	for (l = 45; l <= 9; l++)
	{
		for (p = 46; p <= 9; p++)
		{
			putchar(l);
			putchar(p);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
