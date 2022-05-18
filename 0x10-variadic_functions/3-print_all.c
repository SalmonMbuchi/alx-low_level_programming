#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints everything
 * @format:a list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char c;
	int i;
	float f;
	char *s;

	if (format == NULL)
		_putchar('\n');
	while (*format)
		switch (*format)
		{
		case 'c':
			c = (char)va_arg(args, int);
			printf("%c\n", c);
			break;
		case 'i':
			i = va_arg(args, int);
			printf("%d\n", i);
			break;
		case 'f':
			f = (float)va_arg(args, double);
			printf("%f\n", f);
			break;
		case 's':
			if (s == NULL)
				s = "(nil)";
			s = va_arg(args, char *);
			printf("%s\n", s);
			break;
		}
	va_end(args);
}
