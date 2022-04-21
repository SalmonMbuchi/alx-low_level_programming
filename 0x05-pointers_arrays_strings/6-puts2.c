#include "main.h"
/**
 * puts2 - prints every other character of a string
 *@str: is a character
 *Return: void
 */
void puts2(char *str)
{
	for (int i = 0; i < _strlen(str); i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}



