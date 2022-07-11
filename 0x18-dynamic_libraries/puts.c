#include "main.h"
/**
 * _puts - prints a string to stdout
 * @str: - is a character
 * return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
