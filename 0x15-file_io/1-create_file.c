#include "main.h"
/**
 * create_file - hgffx
 * @filename: jvvc
 * @text_content: bvvc
 * Return: nvvcxx
 */
int create_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL)
		return (-1);
	file = fopen(filename, "w");
	if (file == NULL)
		return (-1);
	if (text_content != NULL)
		fputs(text_content, file);
	fclose(file);
	chmod(filename, S_IRUSR  | S_IWUSR);
	return (1);
}
