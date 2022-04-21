#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: is a character
 * Return: len 
 */
int _strlen(char *s)
{
	int len = 0;

	while (len != '\0')
		_putchar(s[len]);
		len++;

	return (len);
}
