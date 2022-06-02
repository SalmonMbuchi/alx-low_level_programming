#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to standard output
 * @filename: pathname to be specified
 * @letters: the number of letters it should read and print
 * Return: actual number of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;  /*will store the file descriptor*/
	char *buf;  /*will store the actual content of  the file*/
	ssize_t letters_read; /*read() and write() return values of type ssize_t*/

	/*first check if the pointer filename points to nowhere*/
	if (filename == NULL)
		return (0);
	/*allocaate some memory for buf*/
	buf = malloc(sizeof(char) * letters + 1); /*null terminating byte hence +1*/
	/*check if buf points to null*/
	if (buf == NULL)
		return (0);

	/*open section*/
	fd = open(filename, O_RDONLY); /*read from this file hence read-only flag*/
	/*check for a negative value*/
	if (fd == -1)
		return (0);
	/* read section */
	letters_read = read(fd, buf, letters);
	/*check for a negative value */
	if (letters_read == -1)
		return (0);
	/* close the file descriptor */
	close(fd);

	/* write section */
	write(STDOUT_FILENO, buf, letters_read); /* write to POSIX standard output*/
	buf[letters + 1] = '\0'; /*null terminate*/

	/* free the allocated space */
	free(buf);

	return (letters_read);
}
