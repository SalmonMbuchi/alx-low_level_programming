#include <stdio.h>
#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: points to a string
 * Return: length
 */
int _strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * power - returns the power of a number
 * @base: the base of the number
 * @expo: the exponent
 * Return: int
 */
int power(int base, int expo)
{
	int i, result;

	result = 1;
	for (i = 0; i < expo; i++)
		result *= base;
	return (result);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number(success) or 0 (fail)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;
	int i, len;

	if (b == NULL)
		return (0);
	len = _strlen(b);
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		x += (b[i] - '0') * power(2, len - i - 1);
	}
	return (x);
}
