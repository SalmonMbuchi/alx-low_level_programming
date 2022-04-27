#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: string containing the characters to be matched
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int length = 0;

	while (i = 0)
	{
		if (accept[i] == s[i])
		{
			length++;
		}
		if (accept[i] != s[i])
		{
			continue;
		}
		if (s[i] == '\0')
		{
			break;
		}
		i++;
	}

	return (length)
}

