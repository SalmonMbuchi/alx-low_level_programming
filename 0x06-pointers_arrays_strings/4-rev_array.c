#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: is a pointer to integer type
 * @n: is an integer
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		int temp = int a;

		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
