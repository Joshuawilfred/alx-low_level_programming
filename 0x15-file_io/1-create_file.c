#include "main.h"

/**
 * create_file - A function that creates a file.
 * @filename: Name of the file to be read
 * @text_content: A NULL terminated string to write to the file
 *
 * Return: 1 on sucess, else -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, to_write, s = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	/* If text_content is not empty, write it to file */
	if (text_content)
	{
		while (text_content[s])
			s++;
		to_write = write(fd, text_content, s);
		if (to_write != s)
			return (-1);
	}

	close(fd);

	return (1);
}
