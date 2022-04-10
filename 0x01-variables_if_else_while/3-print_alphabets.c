#include <stdio.h>

/**
 * main - uppercase and lowercase
 *
 * Description: prints the alphabet in lowercase, and then in uppercase
 *
 *Return:0 (success)
 */
int main(void)
{
	int AZ;

	for (AZ = 'a'; AZ <= 'z'; AZ++)
	{
		putchar(AZ);
	}
	for (AZ = 'A'; AZ <= 'Z' ; AZ++)
	{
		putchar(AZ);
	}
	putchar ('\n');
	return (0);
}
