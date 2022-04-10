#include <stdio.h>

/**
 * main - all exept q and e
 *
 * Description: prints all letters except q and e
 *
 * Return: Always 0
 */
int main(void)
{
	int A;

	for (A = 'a'; A <= 'z'; A++)
	{
		if (A == 'e')
			continue;
		if (A == 'q')
			continue;
		else
		putchar(A);
	}
	putchar ('\n');
	return (0);
}

