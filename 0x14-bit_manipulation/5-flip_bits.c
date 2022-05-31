#include <stdio.h>
#include "main.h"
/**
 * flip_bits - returns the number of bits
 * @n: int
 * @m: int
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int sum;
	unsigned long int h;

	sum = 0;
	h = n ^ m;
	while (h)
	{
		sum += h & 1;
		h = h >> 1;
	}
	return (sum);
}
