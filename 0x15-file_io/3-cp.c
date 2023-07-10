#include "main.h"
/**
 * main - program to implement cp command
 * @argc: number of arguments
 * @argv: array of the arguments
 * Return: 1 on success
 */
int main(int argc, char *argv[])
{
	char buf[1024];
	int fd, fds, cfds, cfd, fwrite, fread;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fds = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((fread = read(fd, buf, 1024)) > 0)
	{
		fwrite = write(fds, buf, fread);
		if (fds == -1 || fwrite != fread)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (fread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	cfd = close(fd);
	cfds = close(fds);
	if (cfd == -1 || cfds == -1)
	{
		if (cfd == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cfd);
		else if (cfds == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cfds);
		exit(100);
	}
	return (0);
}
