#include "main.h"
/**
 * _memset - fills the memory with a constant byte
 * @s: is a char
 * @b:is  char
 * @n:is an integer
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
