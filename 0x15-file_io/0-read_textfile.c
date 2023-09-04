#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to string with name of file
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, i, n;
	char *buf;

	if (!filename)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	if (!buf)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	i = read(fd, buf, letters);
	if (i == -1)
	{
		return (0);
	}
	n = write(STDOUT_FILENO, buf, i);
	if (n == -1)
	{
		return (0);
	}
	close(fd);
	free(buf);
	return (i);
}
