#include "main.h"
/**
 * puts_half - prints only the second half of a string
 * @str: is a character
 * Return:void
 */
void puts_half(char *str)
{
	int i, h, max;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	max = i;
	h = max / 2;
	while (h <= max)
	{
		_putchar(str[h]);
		h++;
	}
	_putchar('\n');
}
