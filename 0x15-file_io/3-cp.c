#include "main.h"
/**
 * print_error - kjdqdhefh
 * @message: mndjf
 */
void print_error(const char *message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
}
/**
 * main - kfjjfhj
 * @argc: jdjhhd
 * @argv: kdjjhfd
 */
int main(int argc, char *argv[])
{
	
	 const char *file_from = argv[1];
	 const char *file_to = argv[2];
	 char buffer[BUFFER_SIZE];
	 int fd_to, fd_from;
	 ssize_t br, bw;

	if (argc != 3)
	{
		print_error("Usage: cp file_from file_to");
		return (97);
	}
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		print_error(strerror(errno));
		return (98);
		fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
		if (fd_to == -1)
		{
			print_error(strerror(errno));
			close(fd_from);
			return (99);
		}
		while ((br = read(fd_from, buffer, BUFFER_SIZE)) > 0)
		{
			bw = write(fd_to, buffer, br);
			if (bw == -1)
			{
				print_error(strerror(errno));
				close(fd_from);
				close(fd_to);
				return (99);
			}
		}
		if (br == -1)
		{
			print_error(strerror(errno));
			close(fd_from);
			close(fd_to);
			return (99);
		}
		if (close(fd_from) == -1)
		{
			print_error(strerror(errno));
			close(fd_to);
			return (100);
		}
		if (close(fd_to) == -1)
		{
			print_error(strerror(errno));
			return (100);
		}
	}
	return (0);
}
