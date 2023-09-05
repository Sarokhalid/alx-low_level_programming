#include <stdlib.h>
#include "main.h"
/**
 * argstostr - bcx
 * @ac: nvvc
 * @av: vcx
 * Return: hccx
 */
char *argstostr(int ac, char **av)
{
	int t = 0;
	int i, j;
	char *result;
	int index = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			t++;
		t++;
	}
	result = (char *)malloc(sizeof(char) * (t + 1));
	if (result == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[index] = av[i][j];
			index++;
		}
		result[index] = '\n';
		index++;
	}
	result[index] = '\0';
	return (result);
}

