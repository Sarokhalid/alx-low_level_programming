#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * check_num - ghfxxx
 * @str: cgbh
 * Return: gjj
 */
int check_num(char *str)
{
	unsigned int co;

	co = 0;
	while (co < strlen(str))
	{
		if (!isdigit(str[co]))
			return (0);
		co++;
	}
	return (1);
}
/**
 * main - gjj
 * @argc: ghj
 * @argv: hjn
 * Return: bcx
 */
int main(int argc, char *argv[])
{
	int co;
	int sti;
	int sum = 0;

	co = 1;
	while (co < argc)
	{
		if (check_num(argv[co]))
		{
			sti = atoi(argv[co]);
			sum += sti;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		co++;
	}
	printf("%d\n", sum);
	return (0);
}






