#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: checks for alphabetic characeters
 *
 * Returns: 1 if c is a letter, lowercase or uppercase
 * Returns 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}	
