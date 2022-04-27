#include "main.h"
#define NULL 0
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: is the string to be scanned
 * @accept: string to be used for testing the set of bytes
 * Return: a pointer to char
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}

	return (NULL);
}
