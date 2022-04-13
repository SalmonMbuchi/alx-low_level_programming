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
	char r = 'c';
	char w = 'C';

	q = _islower('H');
	_putchar(q + '0');
	q = _islower(r);
	_putchar(q + '0');
	q = _islower(w);
	_putchar(q + '0');
	_putchar('\n');
	return (0);
}
