#include <stdio.h>

/**
 * main - print numbers
 *
 * Description: print all base10 numbers using putchar
 *
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		putchar (num + '0');
	
	putchar ('\n');
	return (0);
}
