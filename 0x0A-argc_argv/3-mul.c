#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: (0) SUCCESS
 */
int main(int argc, char *argv[])
{
	if (argc <= 2 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
