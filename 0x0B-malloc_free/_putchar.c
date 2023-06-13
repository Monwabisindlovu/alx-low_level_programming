#include <unistd.h>

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to be written.
 *
 * Return: On success 1.
 * On error, -1 is returned and errno is set appropriately.
 */
int _putchar(int c)
{
	unsigned char ch = (unsigned char)c;

	
	if (write(STDOUT_FILENO, &ch, 1) == -1)
	{
		
		return (-1);
	}

	
	return ((int)ch);
}

