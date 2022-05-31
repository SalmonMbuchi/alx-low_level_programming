#include <stdio.h>
#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: int
 * @index: index
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j;

	if (index >= (sizeof(*n) * 8))
		return (-1);
	j = 1;
	j = j << index;
	j = ~j;
	*n = *n & j;

	return (1);
}
