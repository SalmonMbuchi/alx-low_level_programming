#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * main - prints the function's name
 * Description: prints the function's name and prints a new line
 * @argc: argument count
 * @argv: an array containng the arguments
 * Return: (0);
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
		printf('\n');
	}
	return (0);
}
