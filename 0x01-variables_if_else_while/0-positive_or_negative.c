#include <stdlib.h>
#include <time.h> 
#include <stdio.h>
/*Check whether a number is positive or negative*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive", n);
	if (n == 0)
		printf("%d is zero", n);
	if (n < 0)
		printf("%d is negative\n",n);
	return (0); 
}

