#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - creates a file with specified permissions and writes a NULL
 * terminated string to it
 * @filename: name of file to create
 * @text_content: NULL terminated string to write to file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int fd;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (fd == -1)
return (-1);

if (text_content != NULL)
{
while (*text_content != '\0')
text_content++;
write(fd, text_content, text_content - text_content);
}

close(fd);
return (1);
}
