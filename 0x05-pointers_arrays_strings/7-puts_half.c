#include "main.h"
/**
 * puts_half - prints only the second half of a string
 * @str: is a character
 * Return:void
 */
void puts_half(char *str)
{
	int len = 1, i, n;

	/* get the length of the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	/* check if length is even or odd */
	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len / 2) - 1;
	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
