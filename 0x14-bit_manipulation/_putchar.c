#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 * @c:the character to be written
 *
 * Return:on success 1.
 * on error, -1 is returned, and errno is set appropriatley
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
