#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: is an integer pointer variable
 * @n: is an integer
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i >= 0)
	{
		printf("%d", a[i]);
		i++;
	}
	_putchar('\n');
}
