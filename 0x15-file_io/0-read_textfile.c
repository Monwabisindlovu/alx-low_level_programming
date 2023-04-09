#include <stdlib.h>
#include <stdio.h>

/**
 * function - a function that reads a text file and  prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: the actual number of letters read and printed, or 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *file;
char *buffer;
ssize_t read_count, write_count;

if (filename == NULL)
return (0);

file = fopen(filename, "r");
if (file == NULL)
return (0);

buffer = malloc(sizeof(char) * (letters + 1));
if (buffer == NULL)
{
fclose(file);
return (0);
}

read_count = fread(buffer, sizeof(char), letters, file);
buffer[read_count] = '\0';

if (ferror(file))
{
free(buffer);
fclose(file);
return (0);
}

write_count = fwrite(buffer, sizeof(char), read_count, stdout);

free(buffer);
fclose(file);

if (write_count != read_count)
return (0);

return (read_count);
}
