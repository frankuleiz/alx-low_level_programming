#include "main.h"

/**
 * read_textfile - reads a text file and prints to the standard output
 * @filename: name of the fileto be read
 * @letters: number of letter to be read and printed
 * Return: actual number of letters to be printed or 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(0);

	return (w);
}
