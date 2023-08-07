#include <stdio.h>
#include <stdlib.h>

/**
 * main - Copies the content of a file to another file
 *
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 on success, or the appropriate error code on failure
 */
int main(int argc, char **argv)
{
	FILE *file_from, *file_to;
	int c;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = fopen(argv[1], "r");
	if (file_from == NULL)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = fopen(argv[2], "w");
	if (file_to == NULL)
	{
		fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
		fclose(file_from);
		exit(99);
	}

	while ((c = fgetc(file_from)) != EOF)
	{
		if (fputc(c, file_to) == EOF)
		{
			fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
			fclose(file_from);
			fclose(file_to);
			exit(99);
		}
	}

	fclose(file_from);
	fclose(file_to);

	return (0);
}

