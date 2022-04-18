#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: is an integer
 * Return: void
 */
void print_diagonal(int n)
{
	int line;

	if (n > 0)
	{
		line = 0;
		while (line < n)
		{
			_putchar('\\');
			/*_putchar('\n');*/
			line++;
		}
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
	/*_putchar('\n');*/
}
