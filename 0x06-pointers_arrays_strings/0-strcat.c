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
	*_strcat = '\0';

	return (dest);
}
