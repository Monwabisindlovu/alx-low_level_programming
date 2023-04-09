#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: the name of the file to append to
 * @text_content: the content to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, write_count, text_len;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);

if (text_content == NULL)
{
close(fd);
return (1);
}

text_len = strlen(text_content);
write_count = write(fd, text_content, text_len);
if (write_count != text_len)
{
close(fd);
return (-1);
}

close(fd);
return (1);
}
