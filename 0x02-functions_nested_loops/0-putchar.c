#include "main.h"

/**
 *main - prints _putcha
 *
 * Description: prints _putchar followed by a newline
 *
 * Return: Always 0
 */

int main(void)
{
	char x[8]= "_putchar";
	int i = 0;

	for (i = 0; i <=8 ; i++)
	{
		_putchar(x[i]);
	}
	_putchar ('\n');
	
	return (0);
}
