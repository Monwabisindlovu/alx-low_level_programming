#include <unistd.h>

/**
 * _putchar - writes a character to the standard output
 * @c: the character to print
 *
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
