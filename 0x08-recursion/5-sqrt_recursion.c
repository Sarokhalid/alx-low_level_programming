#include "main.h"
/**
 * _sqrt_recursion - print square
 * @n: integer
 * @v: hhjjj
 * square - print root
 * Return: -1. value of square
 */
int square(int n, int v);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * square - print root
 * @n: integer
 * @v: vbnj
 * Return: int
 */
int square(int n, int v)
{
	if (v * v == n)
		return (v);
	else if (v * v < n)
		return (square(n, v + 1));
	else
		return (-1);
}
