#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - Reads and prints the content of a text file.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return (0);

	FILE *file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	char *buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	ssize_t bytes_read = fread(buffer, sizeof(char), letters, file);
	if (bytes_read == 0)
	{
		free(buffer);
		fclose(file);
		return (0);
	}

	buffer[bytes_read] = '\0';
	printf("%s", buffer);

	free(buffer);
	fclose(file);

	return bytes_read;
}

