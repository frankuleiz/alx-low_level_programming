#include "main.h"

/**
 * append_text_to_file - appends text to end of a file
 * @filename: the name of the file
 * @text_content: the string to add at the end of the file
 * Return: 1 (sucecss) or -1 (failure)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, r = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

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
