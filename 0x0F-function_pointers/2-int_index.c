#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - hgfds
 * @array: nbvcx
 * @size: bgfdds
 * @cmp: nhgfx
 * Return: jhvcxx
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int s;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (s = 0; s < size; s++)
	{
		if (cmp(array[i]) != 0)
			return (s);
	}
	return (-1);
}
