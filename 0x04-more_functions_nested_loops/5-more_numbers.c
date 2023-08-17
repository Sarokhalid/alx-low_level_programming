#include "main.h"
/**
 *more_numbers - print 10 times numbers from 0 tob14
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int c;

	for (i = 1; i <= 10; i++)
	{
		for (c = 1; c <= 14; c++)
			if (c >= 10)
			{
				_putchar('1');
			_putchar(c % 10 + '0');
			}
		_putchar('\n');
	}
}
