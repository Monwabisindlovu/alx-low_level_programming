#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generates and prints passwords for the crackme5 executable.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
char password[7], *codex, *username;
int len, i, tmp;

username = argv[1];
codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
len = strlen(username);

tmp = (len ^ 59) & 63;
password[0] = codex[tmp];

tmp = 0;
for (i = 0; i < len; i++)
tmp += username[i];
password[1] = codex[(tmp ^ 79) & 63];

tmp = 1;
for (i = 0; i < len; i++)
tmp *= username[i];
password[2] = codex[(tmp ^ 85) & 63];

tmp = 0;
for (i = 0; i < len; i++)
{
if (username[i] > tmp)
tmp = username[i];
}
srand(tmp ^ 14);
password[3] = codex[rand() & 63];
tmp = 0;
for (i = 0; i < len; i++)
tmp += (username[i] * username[i]);
password[4] = codex[(tmp ^ 239) & 63];

for (i = 0; i < username[0]; i++)
tmp = rand();
password[5] = codex[(tmp ^ 229) & 63];
password[6] = '\0';
printf("%s", password);
return (0);
}

