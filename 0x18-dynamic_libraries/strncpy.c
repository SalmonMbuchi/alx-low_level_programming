#include "main.h"
/**
 * _strncpy - copies a string pointed to by src
 * @dest: is a character
 * @src: is a character
 * @n: is an integer
 * Return:char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
