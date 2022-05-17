#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the number of parameters
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap; /*declare a variable of type va_list*/

	va_start(ap, n); /*va_start is called with two arguments*/
	int i;
	int sum = 0;

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(ap, int);
	va_end(ap);
	return (sum);
}
