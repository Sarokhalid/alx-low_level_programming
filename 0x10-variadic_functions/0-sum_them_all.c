#include <stdarg.h>
/**
 * sum_them_all - hgfdd
 * @n: bvcx
 * Return: bvcxx
 * @...: jgfc
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int num;
	int s = 0;
	va_list sum;

	if (n == 0)
		return (0);
	va_start(sum, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(sum, int);
		s += num;
	}
	va_end(sum);
	return (s);
}
