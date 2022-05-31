#include <stdio.h>
#include "main.h"
/**
 * set_bit - sets the value of a bit to 1
 * @n: int
 * @index: index
 * Return: value of bit
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index >= (sizeof(*n) * 8))
		return (-1);
	p = 1;
	*n = *n | (p << index);

	return (1);
}
