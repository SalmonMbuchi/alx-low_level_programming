#include "main.h"

/**
 * print_square - prints a square
 * @size: is an integer
 * Return: void
 */
void print_square(int size)
{
	int line;

	while (line < size)
		_putchar('#');
		line++;
	_putchar('\n');
}
