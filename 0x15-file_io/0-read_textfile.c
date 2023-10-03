#include "main.h"
/**
 * read_textfile - hgfd
 * @filename: hhgffd
 * @letters: hgfxx
 * Return: jgddd
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	ssize_t nr, nw;
	char *buffer;

	if (filename == NULL)
		return (0);
	file = fopen(filename, "r");
	if (file == NULL)
		return (0);
	buffer = (char *)malloc((letters + 1) * sizeof(char));
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	nr = fread(buffer, sizeof(char), letters, file);
	if (nr == 0)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	buffer[nr] = '\0';
	nw = fwrite(buffer, sizeof(char), nr, stdout);
	if (nw != nr)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	free(buffer);
	fclose(file);
	return (nw);
}
