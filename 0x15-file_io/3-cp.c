#include "main.h"

/**
 * new_buffer - creates a new buffer
 * @size: buffer size in memory
 * @file: file to be written in buffer
 * Return: buffer
 */
char *new_buffer(int size, char *file)
{
	char *buffer = malloc(sizeof(char) * size);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_files - closes file descriptors
 * @fd: ...
 * Return: void
 */
void close_files(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", c);
		exit(100);
	}
}

/**
 * main - copies a file's content to another file
 * @argc: argument count
 * @argv: array of argument vectors
 * Return: 0
 */
int main(int argc, char **argv)
{
	int file_from, file_to, rd, wr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = new_buffer(1024, argv[2]);

	file_from = open(argv[1], O_RDONLY);
	rd = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		wr = write(file_to, buffer, rd);

		if (file_to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		rd = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);

	free(buffer);
	close_files(file_from);
	close_files(file_to);
	return (0);
}
















