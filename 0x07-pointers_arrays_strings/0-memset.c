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
	int i = 0;

	while (i < n)
	{
		if (i % 10)
		{
			_putchar(b);
		}
		if (!(i % 10) && i)
		{
			_putchar('\n');
		}
		_putchar(s[i]);
	}
	return (s);
}
