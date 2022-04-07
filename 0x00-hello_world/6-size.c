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
	
	printf("Size of a char : %d byte\n", sizeof(charType));
	printf("Size of an int : %d bytes\n", sizeof(intType));
	printf("Size of a long int : %d bytes\n", sizeof(long intType));
	printf("Size of a long long int : %d bytes\n", sizeof(long long intType));
	printf("Size of a float : %d bytes\n ", sizeof(floatType));
	return (0);
}
