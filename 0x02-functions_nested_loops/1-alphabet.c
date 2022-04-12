#include "main.h"

/**
 * main - prints alphabet
 *
 * Description: prints alphabet in lowercase
 *
 * Return: Always  0(success)
 */
int main(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
		print_alphabet(c);

	_putchar('\n');
	return (0);
}
