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

	while (1)
	{
		ptr = (char *)malloc(sizeof(char) * size);
		if (size  == 0)
		{
			return (NULL);
		}
		*ptr = c;
		free(ptr);
	}
	return (ptr);
}
