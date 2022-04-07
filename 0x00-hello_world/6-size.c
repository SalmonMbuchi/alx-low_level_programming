#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{ 
	char charType;
	int intType;
	long int long intType;
	long long long long intType;
	float floatType;
	
	printf("Size of a char : %d byte\n", (int) sizeof(charType));
	printf("Size of an int : %d bytes\n", (int) sizeof(intType));
	printf("Size of a long int : %d bytes\n", (int) sizeof(long intType));
	printf("Size of a long long int : %d bytes\n", (int) sizeof(long long));
	printf("Size of a float : %d bytes\n ", sizeof(floatType));
	return (0);
}
