#include <stdio.h>

/**
 * main - print alllphabets
 *
 * Description: prints letters in reverse
 *
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 'z'; num >= 'a'; num--)
		putchar (num);

	putchar ('\n');
	return (0);
}
