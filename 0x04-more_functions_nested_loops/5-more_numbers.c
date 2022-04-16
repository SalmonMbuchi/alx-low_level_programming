#include "main.h"

/**
 * more_numbers - prints a row of numbers ten times
 * Return: void
 */
void more_numbers(void)
{
	int c, h = '0';

	while (h <= '10')
	{
		c = '0';
		while (c <= '14')
		{
			_putchar(c);
			c++;
		}
	_putchar(c);
	}
	_putchar('\n');
}
