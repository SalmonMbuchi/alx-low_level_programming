#include <stdio.h>
#include "main.h"
/**
 * get_endianness - checks for endianness
 * Return: int
 */
int get_endianness(void)
{
	int n = 1;
	char *end = (char *)&n;

	if (*end == 1)
		return (1);

	return (0);
}
