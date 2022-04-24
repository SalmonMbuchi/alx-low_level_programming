#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: is a character
 * @src: is a character
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int length;
	int k;

	length = 0;
	while (dest[length] != '\0')
	{
		++dest;
	}

	for (j = 0; src[k] != '\0'; ++k, ++length)
	{
		dest[length] = src[k];
	}

	dest[length] = '\0';

	return (dest);
}
