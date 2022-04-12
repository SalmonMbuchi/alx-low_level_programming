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
	int rep = 0;
	char c;

	while (rep++ <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar (c);
		}
	_putchar ('\n');
	}
}
