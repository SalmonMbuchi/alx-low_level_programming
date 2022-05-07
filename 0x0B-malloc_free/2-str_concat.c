#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: a string
 * @s2: the string to be appended to s1
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	int length1, length2, length3, i;
	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length1 = 0;
	while (*(s1 + length1) != '\0')
	{
		length1++;
	}

	length2 = 0;
	while (*(s2 + length2) != '\0')
	{
		length2++;
	}

	length3 = length1 + length2;

	arr = (char *) malloc(length3 * sizeof(char) + 1);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
		arr[i] = s1[i];
	for (i = 0; i < length2; i++)
		arr[i + length1] = s2[i];

	return (arr);
}
