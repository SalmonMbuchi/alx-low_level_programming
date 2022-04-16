#include "main.h"

/**
 * print_line - draws a straight line
 * @n: is an integer
 * Return: void
 */
void print_line(int n)
{
	if (n > '0')
	{
		_putchar('_');
		_putchar('\n');
	}
	if (n <= '0')
	{
		_putchar('\n');
	}
}
