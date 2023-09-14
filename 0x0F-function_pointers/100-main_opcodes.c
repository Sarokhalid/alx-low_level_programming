#include <stdio.h>
#include <stdlib.h>
/**
 * main - hgfx
 * @argc: nbvcc
 * @argv: bvvc
 * Return: jbvc
 */
int main(int argc, char *argv[])
{
	int i;
	int nb;

	void op(int nb);
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	nb = atoi(argv[1]);
	if (nb < 0)
	{
		printf("Error\n");
		return (2);
	}
	op(nb);
	return (0);
}
void op(int nb)
{
	unsigned char *st;
	unsigned char *en;

	st = (unsigned char *)op;
	en = st + nb;
	while (st < en)
	{
		printf("%02x", *st);
		st++;
	}
	printf("\n");
}
