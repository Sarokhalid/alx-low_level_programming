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
	unsigned char *ptr;

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
	ptr = (unsigned char *)main;
	for (i = 0; i < nb; i++)
		printf("%02x", ptr[i]);
	printf("\n");
	return (0);
}

