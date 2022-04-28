#include "main.h"
/**
 * _puts_recursion - prints a string followed by a new line
 * @s: is the string to be printed
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return;
	return (s[i] + _puts_recursion(s[i] + 1));
	_putchar ('\n');
}
