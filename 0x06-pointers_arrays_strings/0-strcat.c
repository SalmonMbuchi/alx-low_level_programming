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
		dest++;
	}

	k = 0;
	while (src[k] != '\0')
	{
		dest[length] = src[k];
		length++;
		k++;
	}

	dest[length] = '\0';

	return (dest);
}
