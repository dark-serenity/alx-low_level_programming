#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all the numbers of base 16 in lowercase,
 *              followed by a new line using putchar function.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		putchar(number + '0');

	for (number = 0; number < 6; number++)
		putchar(number + 'a');

	putchar('\n');

	return (0);
}

