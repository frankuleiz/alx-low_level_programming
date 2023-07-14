#include "main.h"

/**
 * read_textfile - reads a text file and prints to the standard output
 * @filename: name of the fileto be read
 * @letters: number of letter to be read and printed
 * Return: actual number of letters to be printed or 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int r, w;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
		return (0);
	r = read(fd, buff, letters);
	if (r < 0)
	{
		free(buff);
		return (0);
	}
	buff[r] = '\0';
	close(fd);

	w = write(STDOUT_FILENO, buff, r);
	if (w < 0)
	{
		free(buff);
		return (0);
	}

	free(buff);
	return (w);
}
