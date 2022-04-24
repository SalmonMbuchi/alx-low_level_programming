#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: is a character
 * @src: is a character
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i, h;

	i = 0;
	while (dest[i] != '\0')
	{
		++i;
	}
	for (h = 0; src[h] != '\0'; ++h, ++i)
	{
		dest[i] = src[h];
	}
	*src = '\0';

	_putchar(*dest);
	return (dest);
}
