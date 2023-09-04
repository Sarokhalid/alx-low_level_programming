#include <stdlib.h>
#include "main.h"
/**
 * create_array - dynmaic allocted
 * @size: size
 * @c: char
 * Return: arr
 */
char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = (char *)malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);
	for (n = 0; n < size; n++)
		arr[n] = c;
	return (arr);
}
