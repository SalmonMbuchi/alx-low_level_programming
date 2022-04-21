#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: is an integer
 * Return: void
 */
void print_rev(char *s)
{
	int length = strlen(s);
	int i;

	for (i = length - 1; i >= 0; i--)
	{
		if (s[i] == ' ')
		{
			s[i] = '\0';
			_putchar("%s", &(s[i]) + 1);
		}
	}
	_putchar("%s", s);
}
