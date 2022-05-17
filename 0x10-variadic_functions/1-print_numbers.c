#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers followed by a new line
 * @separator: pointer to char
 * @n: number of integers passed to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list num;

	va_start(num, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
			printf("%d, %s", va_arg(num, int), separator);
	}
	_putchar('\n');
	va_end(num);
}
