#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: is the string to be scanned
 * @accept: string to be used for testing the set of bytes
 * Return: a pointer to char
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	i = 0;
	while (i)
	{
		if (accept[i] == s[i])
		{
			return (s);
		}
		if (accept[i] != s[i])
		{
			return (0);
		}
		i++;
	}
	return (s);
}
