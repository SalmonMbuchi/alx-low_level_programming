#include "main.h"
/**
 * strlen - returns the length of a string
 * @s: is a character
 * return: void
 */
int _strlen(char *s)
{
	int len;
	char str;
	
	for (len = 0; str[len] != '\0'; ++len);
	_putchar (len);
	return (len);
}
