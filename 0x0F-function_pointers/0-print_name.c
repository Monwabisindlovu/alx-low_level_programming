#include <stdio.h>
#include <ctype.h>
#include "function_pointers.h"

/* function that prints a name as it is */
void print_name_as_is(char *name)
{
    printf("%s\n", name);
}

/* function that prints a name in uppercase */
void print_name_uppercase(char *name)
{
    int i;

    for (i = 0; name[i] != '\0'; i++)
    {name[i] = toupper(name[i]);
}
printf("%s\n", name);
}

/* function that prints a name using a function pointer */
void print_name(char *name, void (*f)(char *))
{
if (name && f) /* check if the arguments are not NULL */
{
f(name); /* call the function pointed by f with name as argument */
}
}

