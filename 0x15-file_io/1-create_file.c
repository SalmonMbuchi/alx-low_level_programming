#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: pointer to string
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
/**
 * create_file  - creates a file
 * @filename: name of the file to create
 * @text_content: Null terminated string
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	unsigned int length;
	ssize_t letters_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		length = 0;
		text_content = "";
	}
	else
		length = _strlen(text_content);

	letters_written = write(fd, text_content, length);
	if (letters_written == -1)
		return (-1);
	close(fd);

	return (1);
}
