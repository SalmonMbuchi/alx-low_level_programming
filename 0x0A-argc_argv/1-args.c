#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints the number of arguments passed
 * @argc: the number of arguments
 * @argv: an array of command line arguments
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int f = argc - 1; /**because argc starts at index 0*/

	printf("%d\n", f);
	return (0);
}
