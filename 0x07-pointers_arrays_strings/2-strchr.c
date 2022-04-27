#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s:is  a pointer to a character
 * @c: is a character
 * Return: char
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] >= 'a' && s[i] <= 'z')
	{
		if (s[i] == 'c')
		{
			return (s);
		}
		if (s[i] != 'c')
		{
			return (NULL);
		}
	i++;
	}
	return (s);
}
