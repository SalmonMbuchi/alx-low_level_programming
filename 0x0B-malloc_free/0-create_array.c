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
	if (size  == 0)
	{
		return (NULL);
	}
	char *ptr;
	
	ptr = (char*) malloc(sizeof(char) * size);
	*ptr = c;
	free(ptr);

	return (ptr);
}
