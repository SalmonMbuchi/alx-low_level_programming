#include "main.h"

/**
 * _islower - checks for lowercase
 *
 * Description: checks if c is lowercase or not
 *@c is an ascii character
 * Return: 1(success) or 0 (fail)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
