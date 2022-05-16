#include <stdio.h>
#include "function_pointers.h"
#include <string.h>
/**
 * print_name - prints a name
 * @name: pointer to a char
 * @f: function pointer
 * Return: void
 */
void name_is(char *name)
{
	unsigned int i = 0;

	while (i < strlen(name))
	{
		_putchar(name[i]);
		i++;
	}
}
void print_name(char *name, void (*f)(char *))
{
	f = name_is;

	(f)(name);
}
