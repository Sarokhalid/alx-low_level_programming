#include "main h"
/**
 * leet - encoding
 * @n: string
 * Return: n value
 */
char *leet(char *n)
{
	int i, j;
	char w1[] = "aAeEoOtTlL";
	char w2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == w1[j])
			{
				n[i] = w2[j]
			}
		}
	}
	return (n);
}

