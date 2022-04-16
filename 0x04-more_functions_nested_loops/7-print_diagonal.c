#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: is an integer
 * Return: void
 */
void print_diagonal(int n)
{
	int line = 0;

	while (line < n)
	{
		_putchar('\');
		_putchar('\n');
		line++;
	}
	_putchar('\n');
}
