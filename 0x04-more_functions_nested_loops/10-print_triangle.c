#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: is an integer
 * 'Return: void
 */
void print_triangle(int size)
{
	int rowNum, space, symbol;

	if (size <= 0)
		_putchar('\n');
	if (size > 0)
		for (rowNum = 0; rowNum < size; rowNum++)
		{
			for (space = size - 1; space > rowNum; space--)
			{
				_putchar(' ');
				for (symbol = 0; symbol < rowNum; symbol++)
				{
					_putchar('#');
				}
			}
		_putchar('\n');
		}
}
