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
	double numbe;
	char c;
	int numb;
	char *s;
	const char *p;
	
	p = format;
	va_start(all, format);
	while (*p != '\0')
	{
		if (*p == 'c')
		{
			c = (char)va_arg(all, int);
			printf("%c", c);
		else if (*p == 'i')
		{
			numb = va_arg(all, int);
			printf("%d, ", numb);
		}
		else if (*p == 'f')
		{
			numbe = (float)va_arg(all, double);
			printf("%f", numbe);
		}
		else if (*p == 's')
		{
			s = va_arg(all, char *);
			if (s != NULL)
				printf("%s", s);
			else
				printf("(nil)");
		}
		p++;
	}
	va_end(all);
	printf("\n");
}
