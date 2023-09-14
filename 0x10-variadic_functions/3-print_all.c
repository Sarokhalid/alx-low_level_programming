#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - hfdd
 * @format: jggf
 * @...: bhfc
 */
void print_all(const char * const format, ...)
{
	va_list all;
	float f;
	int in = 0;
	char c;
	int i;
	char *s;

	va_start(all, format);
	while (format && format[in])
	{
		if (format[in]  == 'c')
		{
			c = (char)va_arg(all, int);
			printf("%c", c);
		}
		else if (format[in] == 'i')
		{
			i = va_arg(all, int);
			printf("%d", i);
		}
		else if (format[in] == 'f')
		{
			f = (float)va_arg(all, double);
			printf("%f", f);
		}
		else if (format[in] == 's')
		{
			s = va_arg(all, char *);
			if (s ==  NULL)
				printf("(nil)");
			else
				printf("%s", s);
		}
		in++;
	}
	va_end(all);
	printf("\n");
}
