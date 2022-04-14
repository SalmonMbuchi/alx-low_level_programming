#include "main.h"

/**
 *main - determine if number is positive or negative
 *
 *Description: checks whether a number is poditive, negative or zero
 *
 *Return: Always 0(Success)
 */

void positive_or_negative(int i)
{
        int n = int i;

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
