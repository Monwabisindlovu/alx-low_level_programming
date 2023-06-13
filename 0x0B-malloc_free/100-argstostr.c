#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to the concatenated string or NULL on failure
 */
char *argstostr(int ac, char **av)
{
char *str;
int total_len = 0;
int arg_len;
int i, k;


if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
arg_len = 0;
while (av[i][arg_len])
arg_len++;
total_len += arg_len + 1; /* +1 for '\n' */
}


str = malloc(sizeof(char) * total_len + 1); /* +1 for '\0' */
if (str == NULL)
return (NULL);


k = 0;
for (i = 0; i < ac; i++)
{
arg_len = 0;
while (av[i][arg_len])
{
str[k] = av[i][arg_len];
arg_len++;
k++;
}
str[k] = '\n';
k++;
}
str[k] = '\0';

return (str);
}

