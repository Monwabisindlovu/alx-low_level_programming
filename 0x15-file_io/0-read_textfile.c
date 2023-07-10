#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the
 * POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t file_descriptor, bytes_read, bytes_written;

if (filename == NULL)
return (0);

file_descriptor = open(filename, O_RDONLY);
if (file_descriptor == -1)
return (0);

buf = malloc(sizeof(char) * letters);
if (buf == NULL)
{
close(file_descriptor);
return (0);
}

bytes_read = read(file_descriptor, buf, letters);
if (bytes_read == -1)
{
close(file_descriptor);
free(buf);
return (0);
}

bytes_written = write(STDOUT_FILENO, buf, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
close(file_descriptor);
free(buf);
return (0);
}

close(file_descriptor);
free(buf);

return (bytes_written);
}

