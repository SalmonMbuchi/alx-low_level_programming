#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings followed by a new line
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap1;
	char *strings;

	va_start(ap1, n);

	strings = va_arg(ap1, char *);

	if (n == 0)
		_putchar('\n');
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			if (strings == NULL)
			{
				if (i == n - 1)
					printf("(nil)\n");
				else
					printf("(nil)");
			}
			if (separator == NULL)
			{
				if (i == n - 1)
					printf("%s\n", strings);
				else
					printf("%s, ", strings);
			}
			if (separator != NULL)
			{
				if (i == n - 1)
					printf("%s\n", strings);
				else
					printf("%s, %s, ", strings, separator);
			}
		}
	}
	va_end(ap1);
}

