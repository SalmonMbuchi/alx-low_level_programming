#include <unistd.h>
int _putchar(char c);
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
int _putchar(char c)
{
	return (write(1, &c, 1));
}
