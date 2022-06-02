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

	return(i);
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
	int length;
	ssize_t bytes_read;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDONLY, 0600);

	if (text_content == NULL)
		return (-1);
	length = _strlen(text_content) + 1;

	bytes_read = read(fd, text_content, length);
	if (bytes_read == -1)
		return (-1);

	write(fd, text_content, bytes_read);
	close(fd);

	return (1);
}
