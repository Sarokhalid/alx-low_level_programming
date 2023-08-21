#include "main.h"
/**
 * _strlen - print length
 * @s:  character input
 * Return: integer value
 */
int _strlen(char *s)
{
	int y;

	for (y = 0; *s != '\0'; s++)
		++y;
	return (y);
}
