#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error code)
 */
int main(void)
{
int len;
char *str;

str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
len = sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n") - 1;

/* write() function to the standard error */
write(2, str, len);

return (1);
}
