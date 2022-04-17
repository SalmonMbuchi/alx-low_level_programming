#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *  print_to_98 - prints numbers to 98
 *  @n: starting integer
 *
 *  Description: prints all natural number from n - 98
 *  Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
		printf("%d", n);
		printf(", ");
		/*printf(" ");*/
		n++;
		if (n == 98)
			printf("%d", n);
	else if (n > 98)
		printf("%d", n);
		printf(", ");
		n--;
		if (n == 98)
			printf("%d", n);
}

