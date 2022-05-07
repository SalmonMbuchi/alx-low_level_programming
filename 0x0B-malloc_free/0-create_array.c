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
	unsigned int i;
	char *arr;

	arr = (char *) malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);

	if (size != 0)
	{
		for (i = 0; i < size; i++)
		{
			*(arr + i) = c;
		}

		return (arr);
	}
	else
	{
		return (NULL);
	}
}
