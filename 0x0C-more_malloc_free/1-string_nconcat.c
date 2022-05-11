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
	unsigned int len_s1 = strlen(s2);
	unsigned int i;

	if (n >= strlen(s2))
		n = strlen(s2);

	s1 = malloc(n);

	if (s1 != NULL)
	{
		for (i = 0; i < n && s2[i] != '\0'; i++)
			s1[len_s1 + i] = s2[i];
		s1[len_s1 + i] = '\0';

		return (s1);
	}
	else
		return (NULL);
}

