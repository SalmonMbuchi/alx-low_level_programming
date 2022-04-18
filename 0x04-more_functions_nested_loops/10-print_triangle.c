#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: is an integer
 * 'Return: void
 */
void print_triangle(int size)
{
	int rowNum, spaces, symbol;

	if (size > 0)
	{
		while (rowNum < size)
		{
			for (spaces = size - 1; spaces > rowNum; spaces--)
			{
				_putchar(' ');
			}
			for (symbol = 0; symbol < rowNum + 1; symbol++)
			{
				_putchar('#');
			}
			_putchar('\n');
			rowNum++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
