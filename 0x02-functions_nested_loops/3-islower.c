#include "main.h"

/**
 * _islower - checks for lowercase
 *
 * Description: checks if c is lowercase or not
 *
 * Return 1(success)
 */
int _islower(int c)
{
	int q;

	q = _islower('H');
	_putchar(q + '0');
	q = _islower('c');
	_putchar(q + '0');
	q = _islower('C');
	_putchar(q + '0');
	_putchar('\n');
	return (0);
}
