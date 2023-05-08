#include "main.h"
/**
 * create_file - creates file with given content
 * @filename: file to create
 * @text_content: str to write the file
 *
 * Return: 1 on succes
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written, n;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (n = 0; text_content[n]; n++)
			continue;

		bytes_written = write(fd, text_content, n);
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
