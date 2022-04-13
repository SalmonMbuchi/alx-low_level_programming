#include "main.h"

/**
 * print_last_digit - prints
 * Description: prints the last letter of the alphabet
 *
 * Return: Always 0
 */
int print_last_digit(int q)
{
	int lastNum;

	lastNum = q % 10;
	_putchar(lastNum + '0');

	return (lastNum);
}
