#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_r, bytes_w;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	bytes_r = read(fd, buffer, letters);
	close(fd);
	if (bytes_r == -1)
	{
		free(buffer);
		return (0);
	}
	bytes_w = write(STDOUT_FILENO, buffer, bytes_r);
	free(buffer);
	if (bytes_r != bytes_w)
		return (0);
	return (bytes_w);
}
