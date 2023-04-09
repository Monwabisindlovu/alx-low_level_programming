#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters it could read and print, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t n;
int fd;
char *buffer;

if (!filename)
return (0);

buffer = malloc(sizeof(char) * letters);
if (!buffer)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
{
free(buffer);
return (0);
}

n = read(fd, buffer, letters);
if (n == -1)
{
free(buffer);
close(fd);
return (0);
}

if (write(STDOUT_FILENO, buffer, n) != n)
{
free(buffer);
close(fd);
return (0);
}

free(buffer);
close(fd);

return (n);
}
