#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - initializes an array of char with a specific character
 * @size: is an unsigned int
 * @c: is a char
 * Return: a pointer to char
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	while (1)
	{
		ptr = (char *)malloc(sizeof(char) * size);
		if (size  == 0)
		{
			return (NULL);
		}
		*ptr = c;

		for (i = 0; i < size; i++)
		{
			_putchar(ptr[i]);
		}
		free(ptr);
	}
	return (ptr);
}
