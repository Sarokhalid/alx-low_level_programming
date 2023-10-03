#include "main.h"
/**
 * read_textfile - bvccxx
 * @filename: nbvcc
 * @letters: nbvvc
 * Return: ngffdd
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char buf[letters];
	FILE *file;
	ssize_t br, bw;

	if (filename == NULL)
		return (0);
	file = fopen(filename, "r");
	if (file == NULL)
		return (0);
	br = fread(buf, sizeof(char), letters, file);
	if (br <= 0)
	{
		fclose(file);
		return (0);
	}
	bw = fwrite(buf, sizeof(char), letters, stdout);
	fclose(file);
	if (bw != br)
		return (0);
	return (bw);
}
