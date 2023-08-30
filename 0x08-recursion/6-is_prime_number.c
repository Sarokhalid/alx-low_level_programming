#include "main.h"
/**
 * is_prime_number - print number
 * @n: inpyt number
 * @other: vbn
 * Return: 1
 */
int check_prime(int n, int other);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
/**
 * check_prime - print prime
 * Return: square
 * @n: integer
 * @other: integer
 */
int check_prime(int n, int other)
{
	if (other >= n && n > 1)
		return (1);
	else if (n % other == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, other + 1));
}

