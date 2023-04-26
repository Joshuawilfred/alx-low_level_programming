#include "main.h"

/**
 * read_textfile - Reads a text file and prints output.
 * @filename: Name of file to be read
 * @letters: Total number of letters it should read and print
 *
 * Return: If Filename == NULL || Write fails return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t to_read, to_write;
	char *buffer;

	/* Check if the filename is NULL */
	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* Allocating malloc to buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	to_read = read(fd, buffer, letters);
	if (to_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	to_write = write(STDOUT_FILENO, buffer, to_read);
	if (to_write == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);
	return (to_read);

}
