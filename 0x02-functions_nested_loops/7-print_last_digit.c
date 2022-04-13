#include "main.h"

/**
 * print_last_digit - prints
 * Description: prints the last letter of the alphabet
 *@q: prints the last digit
 * Return: Always 0
 */
int print_last_digit(int q)
{
	int lastNum = q % 10;
	
	if (q < 0)
	lastNum = lastNum * -1;

	_putchar(lastNum + '0');

	return (lastNum);
}
