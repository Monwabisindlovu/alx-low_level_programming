#include <stdio.h>
#include <stdlib.h>

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
FILE *fp;
char *buffer;
ssize_t read_chars;

if (!filename)
return (0);

fp = fopen(filename, "r");
if (!fp)
return (0);

buffer = malloc(sizeof(char) * letters);
if (!buffer)
{
fclose(fp);
return (0);
}

read_chars = fread(buffer, sizeof(char), letters, fp);
fclose(fp);

if (read_chars == 0)
{
free(buffer);
return (0);
}

printf("%s", buffer);
free(buffer);

return (read_chars);
}

