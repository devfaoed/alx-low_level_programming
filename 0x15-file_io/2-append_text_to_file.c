#include "main.h"

/**
 * append_text_to_file - appends text to file
 * @filename: ...
 * @text_content: text to append
 * Return: 1 if file exists and -1 if file
 * does not exist or no permission to write
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);
	close(fd);

	return (1);

