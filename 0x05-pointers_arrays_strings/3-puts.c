#include "main.h"
/**
 * _puts - prints a string to stdout
 * @str: - is a character
 * return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i != '\0'; i++)
		_puts(str[i]);
	_putchar('\n');
}
