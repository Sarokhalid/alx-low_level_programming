#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - hvdds
 * @separator: bcxx
 * @n: bvcxx
 * @...: bvcx
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nbs;
	unsigned int i;
	int num;

	va_start(nbs, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(nbs, int);
		printf("%d", num);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(nbs);
	printf("\n");
}
