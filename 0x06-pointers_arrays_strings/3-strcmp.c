#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: is a character
 * @s2: is a character
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	const unsigned char *s1 = (const unsigned char *)s1;
	const unsigned char *s2 = (const unsigned char *)s2;

	while (*s1 != '\0')
	{
		if (*s2 == '\0')
			return (1);
		if (*s2 > *s1)
			return (-1);
		if (*s1 > *s2)
			return (1);

		s1++;
		s2++;
	}
	if (*s2 != '\0')
		return (-1);

	return (0);
}
