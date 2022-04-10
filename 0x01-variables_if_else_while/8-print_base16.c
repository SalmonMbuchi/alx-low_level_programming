#include <stdio.h>

/**
 * main - prints base16 numbers
 *
 * Description: prints numbers base16 in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		putchar(num + '0');
	for (num = 'a'; num <= 'f';num++)
		putchar(num);
	putchar ('\n');
	return (0);
}
