#include "main.h"
/**
 * _sqrt_recursion - print square
 * @n: integer
 * square - print square
 * @v: ghjj
 * Return: -1. value of square
 */
int square(int n, int v);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
int square(int n, int v)
{
	if (v * v == n)
		return (v);
	else if (v * v < n)
		return (square(n, v + 1));
	else
		return (-1);
}
