#include <unistd.h>
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file
 * @filename:file to read
 * @letters: nums of letters tr&p
 *
 * Return: actual nums of letters tr&p
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;

	ssize_t num_read, num_written;
	char *buf = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	num_read = read(fd, buf, letters);
	if (num_read == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	num_written = write(STDOUT_FILENO, buf, num_read);
	if (num_written == -1 || num_written != num_read)
	{
		free(buf);
		close(fd);
		return (0);
	}
	free(buf);
	close(fd);

	return (num_written);
}
