#include <stdio.h>
#include "main.h"
/**
 * get_bit - retuens the value of a bit at a given index
 * @n: int
 * @index: index
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	return ((n >> index) & 1);
}
