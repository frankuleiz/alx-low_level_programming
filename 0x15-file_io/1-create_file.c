#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to be created
 * @text_content: the string to be written to the file
 * Return: 1 (success) or -1 (failure)
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, r;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[r])
			r++;
		w = write(fd, text_content, r);
		if (w != r)
			return (-1);
	}

	close(fd);

	return (1);
}

