#include <stdio.h>

/**
* print_alphabet - prints the alphabet in lowercase
*/
void print_alphabet_x10(void);

int main(void)
{
print_alphabet_x10();
return 0;
}

void print_alphabet_x10(void)
{
for (int i = 0; i < 10; i++) {
for (char c = 'a'; c <= 'z'; c++) {
putchar(c);
}
putchar('\n');
}
}
