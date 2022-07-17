#include <stdio.h>
/**
 * premain - executes before the main function
 * Return: void
 */
void __attribute__ ((constructor))premain(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
