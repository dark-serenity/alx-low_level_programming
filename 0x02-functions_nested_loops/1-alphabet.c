#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line.
 */
void print_alphabet(void)
{
        char letter = 'a';

        while (letter <= 'z')
        {
                putchar(letter);
                letter++;
        }

        putchar('\n');
}

/**
 * my_main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int my_main(void)
{
        print_alphabet();
        return 0;
}

int main(void)
{
        return my_main();
}

