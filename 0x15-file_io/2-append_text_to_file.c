#include "main.h"
#include <unistd.h>

/**
 * append_text_to_file - appends text to end
 * @filename: name of file to append text to
 * @text_content: text to append to end
 *
 * Return: 1 on succes
 */
int append_text_to_file(const char *filename, char *text_content);
{
	int fd, bytes_written = 0;
	ssize_t len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;

		bytes_written = write(fd, text_content, len);

		if (bytes_written == -1 || bytes_written != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}
