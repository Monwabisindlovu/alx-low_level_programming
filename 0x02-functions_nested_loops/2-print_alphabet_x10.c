#include <stdio.h>
 /**
*main - entry point
*Return: always (0);
*/

/* declare _putchar function */
int _putchar(char c);

/* define print_alphabet_x10 function */
void print_alphabet_x10(void)
{
char c;
int i;
for (i = 0; i < 10; i++) {
for (c = 'a'; c <= 'z'; c++) 
_putchar(c);
}
_putchar('\n');
}
}

/* main function */
int main(void)
{
print_alphabet_x10();
return 0;
}

/* define _putchar function */
int _putchar(char c)
{
    return putchar(c);
}
