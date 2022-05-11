#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to a char
 * @s2: pointer to a char
 * @n: unsigned int
 * Return: pointer to char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length1, length2, lengthc, i, j;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	length1 = strlen(s1);
	length2 = strlen(s2);

	if (n >= length2)
		lengthc = length1 + length2 + 1;
	else
	{
		lengthc = length1 + n + 1;
		length2 = n;
	}
	str = malloc(lengthc);
	if (str == NULL)
		return (NULL);

	i = 0;
	while (i < length1)
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < length2)
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
