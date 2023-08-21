#include "main.h"
/**
 * puts2 - print even
 * @str: characters pf paremeters
 */
void puts2(char *str)
{
	int m;

	for (m = 0; str[m] != '\0'; m++)
	{
		if (m % 2 == 0)
			_putchar(str[m]);
	}
	_putchar('\n');
}
