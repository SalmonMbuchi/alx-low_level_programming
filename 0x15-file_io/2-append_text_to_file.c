#include "main.h"
/**
 * _strlen - finds the length of a string
 * @s: string
 * Return: int
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: name of file
 * @text_content: text
 * Return: 1 - success, -1 error
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	unsigned int len;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	len = _strlen(text_content);

	bytes_written = write(fd, text_content, len);
	if (bytes_written == -1)
		return (-1);
	close(fd);
	return (1);
}
