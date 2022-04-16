#include "main.h"

/**
 * print_most_numbers - prints numbers except 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c == '2')
		{
			continue;
		}
		if (c == '4')
		{
			continue;
		}
		_putchar (c);
	}
	_putchar('\n');
}
