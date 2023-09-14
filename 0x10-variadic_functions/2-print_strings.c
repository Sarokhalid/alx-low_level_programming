#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - jhvc
 * @separator: jhgfc
 * @n: bhvcfd
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list st;
	unsigned int i;
	char *str;

	va_start(st, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(st, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(st);
	printf("\n");
}
