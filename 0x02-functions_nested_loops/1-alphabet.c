#include "main.h"

/**
 * main - prints alphabet
 *
 * Description: prints alphabet in lowercase
 *
 * Return: Always  0(success)
 */
void print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	print_alphabet();
	putchar('\n');	
	return (0);
}
