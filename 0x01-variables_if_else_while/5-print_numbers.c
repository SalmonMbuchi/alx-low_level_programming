#include <stdio.h>
/**
 * main - print base10 numbers
 *
 * Description: prints all base10 numbers and a newline
 *
 * Return: always 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		printf("%d", num);
	putchar ('\n');
	return (0);
}
