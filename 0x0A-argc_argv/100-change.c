#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - fhh
 * @argc: hjhg
 * @argv: ghgc
 * Return: fgvhh
 */
int main(int argc, char *argv[])
{
	int num, j, res;
	int coi[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	res = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= coi[j])
		{
			res++;
			num -= coi[j];
		}
	}
	printf("%d\n", res);
	return (0);
}

