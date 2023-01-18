#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output
 *
 * @filename: name of text file
 * @letters: number of letters to be printed
 *
 * Return: the actual num of letters it could print
 * 0 if the file can not be opened or read
 * 0 if filename is NULL
 * 0 if write fails or does not write the expected number of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, num, w;
	char *buf;

	if (filename == NULL || letters < 1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	num = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, num);

	if (fd == -1 || w == -1 || num == -1)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fd);

	return (w);
}
