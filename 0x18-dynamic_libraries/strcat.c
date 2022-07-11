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
		length++;
	}
	for (k = 0; k < length && src[k] != '\0'; k++)
	{
		dest[length + k] = src[k];
	}

	dest[length + k] = '\0';

	return (dest);
}
