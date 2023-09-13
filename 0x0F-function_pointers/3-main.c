#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "3-calc.h"
/**
 * _putchar - bvxdx
 * @c: bgcx
 * Return: bvxx
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * main - hfdd
 * @argc: ngcc
 * @argv: nvcx
 * Return: int
 */
int main(int argc, char *argv[])
{
	int n, m, r;
	int (*op_f)(int, int);

	if (argc != 4)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (98);
	}
	n = atoi(argv[1]);
	m = atoi(argv[3]);

	op_f = get_op_func(argv[2]);

	if (op_f == NULL)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && m == 0)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (100);
	}
	r = op_f(n, m);
	printf("%d\n", r);
	return (0);
}
