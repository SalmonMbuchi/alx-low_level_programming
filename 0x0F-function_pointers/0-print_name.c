#include <stdio.h>
#include "function_pointers.h"
#include <string.h>
/**
 * print_name - prints a name
 * @name: pointer to a char
 * @f: function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;

	(f)(name);
}
