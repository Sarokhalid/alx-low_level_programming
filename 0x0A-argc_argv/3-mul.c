#include <stdio.h>
#include "main.h"
/**
 * _atoi - ghcx
 * @s: string
 * Return: fgghh
 */
int _atoi(char *s)
{
	int i, d, n, l, f, dig;

	i = 0;
	d = 0;
	n = 0;
	l = 0;
	f = 0;
	dig = 0;

	while (s[l] != '\0')
		l++;
	while (i < l && f == 0)
	{
		if (s[i] == '-')
			++d;
		if (s[i] >= '0' && s[i] <= '9')
		{
			dig = s[i] - '0';
			if (d % 2)
				dig = -dig;
			n = n * 10 + dig;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);
	return (n);
}
/**
 * main - ghhjj
 * @argc: vnn
 * @argv: ghjgc
 * Return: 0. 1
 */
int main(int argc, char *argv[])
{
	int res, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	res = num1 * num2;

	printf("%d\n", res);
	return (0);
}



