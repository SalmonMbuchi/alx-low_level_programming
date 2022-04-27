#include "main.h"
/**
 *_memcpy - copies the memory area
 * @dest: is a pointer to char
 * @src:memory area
 * @n: unsigned int
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		src[i] >> dest[i];
	}

	return (dest);
}
