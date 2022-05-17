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
	if (n == 0)
		_putchar('\n');
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			if (separator == NULL)
			{
				if (i == n - 1) /*if its the last element we add a new line*/
					printf("%d\n", va_arg(num, int));
				else
					printf("%d", va_arg(num, int));
			}
			if (separator != NULL)
			{
				if (i == n - 1) /*if its the last element we don't add the separator*/
					printf("%d\n", va_arg(num, int));
				else
					printf("%d%s", va_arg(num, int), separator);
			}
		}
	}
	va_end(num);
}
