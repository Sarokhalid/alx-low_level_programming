#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *array_range - hgcxx
 * @min: gddz
 * @max: nvcxx
 * Return: hfdsss
 */
int *array_range(int min, int max)
{
	int s, i;
	int *a;

	if (min > max)
		return (NULL);
	s = max - min + 1;
	a = (int *)malloc(s * sizeof(int));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < s; i++)
		a[i] = min + i;
	return (a);
}
