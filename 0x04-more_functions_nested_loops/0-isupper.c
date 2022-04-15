#include "main.h"
#include <stdio.h>

/**
 *_isupper - checks for uppercase character 
 *@c: is an integer
 * Return: Always 0
 */
int _isupper(int c)
{
	/*int c;*/

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
