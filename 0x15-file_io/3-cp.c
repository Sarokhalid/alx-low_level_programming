#include "main.h"
int main(int argc, char *argv[]) {
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	int fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	char buffer[BUFFER_SIZE = 1024];
	ssize_t bytes_read, bytes_written;
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (close(fd_from) )
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return 0;
}
