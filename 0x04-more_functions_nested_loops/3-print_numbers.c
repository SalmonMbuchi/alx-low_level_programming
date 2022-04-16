#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers from 0 to 9
 * Return: 0
 */
void print_numbers(void)
{
	int i = 0;

	while (i >= 0 && i <= 9)
	{
		print_numbers();
		i++;
	}
	_putchar('\n');
}
