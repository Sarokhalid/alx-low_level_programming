#include "main.h"
/**
 * square - print square
 * @n: integer
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
