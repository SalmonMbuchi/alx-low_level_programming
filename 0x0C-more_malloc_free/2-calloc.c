#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *g;

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (NULL);
	else
		g = ptr;		
		memset(ptr, 0, nmemb * size);

	return (ptr);
}
