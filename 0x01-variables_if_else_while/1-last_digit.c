#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - last digit
 *
 * Description: print the last digit of the number stored in the variable 
 *
 * Return 0 (Success)
 */
int main(void)
{
	int n;
	int lastNum;
	

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastNum = n%10;
	if (lastNum > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n , lastNum);
	};
	if (lastNum == 0) 
	{
		printf("Last digit of %d is %d and is 0\n", n ,lastNum);
	}
	if (lastNum <= 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n ,lastNum);
	}
	return (0);
}
