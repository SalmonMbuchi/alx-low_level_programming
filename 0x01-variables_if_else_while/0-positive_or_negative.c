#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*Check whether a number is positive or negative*/
/*Main: Determine if a number is 0, positive or negative*/
/*Entry pooint of our program*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}

