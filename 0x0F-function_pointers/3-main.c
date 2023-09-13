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
	int num1, num2, result;
	int (*op_func)(int, int);

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
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
	}
	result = op_func(num1, num2);
	printf("%d\n", result);
	return (0);
}
