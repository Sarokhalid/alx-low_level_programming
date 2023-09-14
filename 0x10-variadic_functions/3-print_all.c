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
	int i = 0;
	char c;
	float f;
	int numb;
	char *s;

	va_start(all, format);
	while (format[i] != '\0')
	{
		if (format[i] == 'c')
		{
			c = (char)va_arg(all, int);
			printf("%c", c);
		}
		else if (format[i] == 'i')
		{
			numb = va_arg(all, int);
			printf("%d", numb);
		}
		else if (format[i] == 'f')
		{
			f = (float)va_arg(all, double);
			printf("%f", f);
		}
		else if (format[i] == 's')
		{
			s = va_arg(all, char *);
			if (s != NULL)
				printf("%s", s);
			else
				printf("(nil)");
		}
		i++;
	}
	va_end(all);
	printf("\n");
}
