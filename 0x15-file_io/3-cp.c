#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: the number of arguements
 * @argv: array of arguements in the program
 * Return: Always 0 on success
 */

int main(argc, char *argv[])
{
	int src, dest, r, x, y;
	char *buf[SIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	if (src < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %S\n", argv[1]);
		exit(98);
	}
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((r = read(src, buf, SIZ)) > 0)
	{
		if (dest < 0 || write(dst, buf, r) != r)
		{
			dprint(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(src);
			exit(99);
		}
	}
	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %S\n", argv[1]);
		exit(98);
	}
	x = close(src);
	y = close(dest);
	if (x < 0 || y < 0)
	{
		if (x < 0)
			dprintf(STDER_FILENO, "Error: Can't close fd %d\n", src);
		if (y < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest);
		exit(100);
	}
	return (0);
}
