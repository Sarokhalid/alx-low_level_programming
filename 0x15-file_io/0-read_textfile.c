#include "main.h"
/**
 * read_textfile - bvccxx
 * @filename: nbvcc
 * @letters: nbvvc
 * Return: ngffdd
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file = fopen(filename, "r");
	ssize_t br, bw;
	long fs;

	if (filename == NULL)
		return (-1);
	fseek(file, 0, SEEK_END);
	fs = ftell(file);
	rewind(file);
	buf = (char *)malloc(fs * sizeof(char));
	if (buf == NULL)
	{
		fclose(file);
		return (-1);
	}
	br = fread(buf, sizeof(char), fs, file);
	if (br <= fs)
	{
		free(buf);
		fclose(file);
		return (-1);
	}
	bw = fwrite(buf, sizeof(char), br, stdout);
	fclose(file);
	if (bw != br)
	{
		free(buf);
		fclose(filel;
		return (-1);
	}
	free(buf);
	fclose(file);
	return (1);
}
