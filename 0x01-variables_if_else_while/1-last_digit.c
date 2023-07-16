#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Prints information about the last digit of a random number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	/* Seed the random number generator */
	srand(time(0));

	/* Generate a random number */
	n = rand();

	printf("Last digit of %d is %d and is", n, n % 10);

	if (n % 10 > 5)
		printf(" greater than 5\n");
	else if (n % 10 < 6 && n % 10 != 0)
		printf(" less than 6 and not 0\n");
	else
		printf(" 0\n");

	return (0);
}

