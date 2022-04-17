#include "main.h"

/**
 * print_last_digit - prints
 * Description: prints the last letter of the alphabet
 *@q: prints the last digit
 * Return: Always 0
 */
int print_last_digit(int q)
{
	int c;

	c = q % 10;
	_putchar(c + '0');
	if (q < 0)
		c = c * -1;
	return (c);
}
