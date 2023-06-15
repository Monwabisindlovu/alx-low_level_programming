#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char **argv)
{
    char *result;

    /* check if the number of arguments is correct */
    if (argc != 3)
        _error();

    /* check if the arguments are valid numbers */
    if (!_isnumber(argv[1]) || !_isnumber(argv[2]))
        _error();

    /* perform long multiplication and store the result */
    result = _long_mul(argv[1], argv[2]);

    /* print the result followed by a new line */
    printf("%s\n", result);

    /* free the memory allocated for the result */
    free(result);

    /* return success */
    return (0);
}

