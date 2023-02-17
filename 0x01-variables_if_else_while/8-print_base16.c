#include <stdio.h>

int main(void) {
int i;
for (i = 0; i < 16; i++) {
if (i < 10) {
putchar(i + '0');
} else {
putchar(i - 10 + 'a');
}
}
putchar('\n');
return 0;
}
