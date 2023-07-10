#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"

/**
 * create_file - Creates a file with the specified text content.
 * @filename: The name of the file to create.
 * @text_content: The NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
int file_descriptor, bytes_written, length = 0;

if (filename == NULL)
return (-1);

file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (file_descriptor == -1)
return (-1);

if (text_content != NULL)
{
while (text_content[length] != '\0')
length++;

bytes_written = write(file_descriptor, text_content, length);
if (bytes_written == -1 || bytes_written != length)
{
close(file_descriptor);
return (-1);
}
}

close(file_descriptor);
return (1);
}

