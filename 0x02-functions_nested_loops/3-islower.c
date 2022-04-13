#include "main.h"

/**
 * _islower - checks for lowercase
 *
 * Description: checks if c is lowercase or not
 *
 * Return 1(success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	else
	{
		return (0);
	}
}
