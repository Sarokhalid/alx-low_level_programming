#include <unistd.h>
#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - jgfdx
 * @name: nvfxz
 * @f: jgxzz
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
/**
 * _putchar - jgfxx
 * @c:  jhgfcxx
 * Return: integer
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * pname - bbcxxzz
 * @name: jhcxx
 */
void pname(char *name)
{
	if (name == NULL)
		return;
	while (*name != '\0')
	{
		_putchar(*name);
		name++;
	}
	_putchar('\n');
}

