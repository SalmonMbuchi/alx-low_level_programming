#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: is an integer
 * 'Return: void
 */
void print_triangle(int size)
{
	int rowNum, space, symbol;

	if (size < 0)
		_putchar('\n');
	for (rowNum = 1; rowNum <= size; rowNum++)
	{
		for (space = 1; space == size - rowNum; space++)
		/*
		{
			_putchar(' ');
		}
		*/
			for (symbol = 1; symbol <= rowNum; symbol++)
			{
				_putchar('#');
			}
	_putchar('\n');
	}
}
