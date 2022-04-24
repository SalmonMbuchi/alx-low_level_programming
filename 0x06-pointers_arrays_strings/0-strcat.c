#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: is a character
 * @src: is a character
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	/*char *dest = dest;*/
	/*char *src = src;*/

	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	_putchar(*dest);
	return (dest);
}
