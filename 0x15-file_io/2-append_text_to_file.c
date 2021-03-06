#include "holberton.h"

/**
 * append_text_to_file -  appends text at the end of a file
 * @filename: File name
 * @text_content: content of file
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0, a;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";
	fd = open(filename, O_WRONLY | O_APPEND, 0200);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	while (text_content[i])
		i++;
	a = write(fd, text_content, i);
	close(fd);
	if (a == -1)
		return (-1);
	return (1);
}
