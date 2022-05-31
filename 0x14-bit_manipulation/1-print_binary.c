#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: long int
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int h, i;
	unsigned long int x;

	h = 0;
	for (i = 63; i >= 0; i--)
	{
		x = (n >> i) & 1;
		if (x == 1)
			h = 1;
		if (h == 1)
			_putchar(((n >> i) & 1) + '0');
	}
	if (n == 0)
		_putchar('0');
}
