#include "main.h"
int main(int argc, char *argv[])
{
	const char *fm;
	const char *ft;
	int fdf, fdt;
	char buffer[BUFFER_SIZE];
	ssize_t br, bw;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fm = argv[1];
	ft = argv[2];
	fdf = open(fm, O_RDONLY);
	if (fdf == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", fm); exit(98);
	}
	fdt = open(ft, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fdt == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", ft); exit(99);
	}
	while ((br = read(fdf, buffer, BUFFER_SIZE)) > 0)
	{
		bw = write(fdt, buffer, br);
		if (bw == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", ft); exit(99);
		}
	}
	if (br == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", fm); exit(98);
	}
	if (close(fdf))
	{
		dprintf(2, "Error: Can't close fd %d\n", fdf); exit(100);
	}
	if (close(fdt) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fdt); exit(100);
	}
	return (0);
}
