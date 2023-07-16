#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Prints whether a random number is positive, negative, or zero
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

/* Seed the random number generator */
srand(time(0));

/* Generate a random number */
n = rand() - RAND_MAX / 2;

printf("The number %d is", n);

if (n > 0)
printf(" positive\n");
else if (n == 0)
printf(" zero\n");
else
printf(" negative\n");

return (0);
}

