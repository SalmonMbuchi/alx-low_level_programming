#include "main.h"

/**
 *print_alphabet_x10 - prints the alphabet
 *
 * Description: prints the alphabet ten times in lower case
 *
 * Return: 0 
 */
void print_alphabet_x10(void)
{
	char c,d;

	for (c = 'a'; c <= 'z'; c ++)
	{
		for (d = c; c <= 'z'; d++)
			_putchar(d);
	}
	_putchar('\n');
	return (0);
}

