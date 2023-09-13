#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - bvdsshj
 * @size: nvcx
 * @action: nhgccc
 * @array: bccds
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t s;

	if (array == NULL || action == NULL)
		return;
	for (s = 0; s < size; s++)
		action(array[s]);
}
