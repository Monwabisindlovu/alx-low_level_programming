#include <stdio.h>
#include "main.h"

int main(void)
{
int r;

r = wildcmp("main.c", "*.c");
printf("%d\n", r);  /* expected output: 1 */

r = wildcmp("main.c", "m*a*i*n*.*c*");
printf("%d\n", r);  /* expected output: 1 */

r = wildcmp("main.c", "main.c");
printf("%d\n", r);  /* expected output: 1 */

r = wildcmp("main.c", "m*c");
printf("%d\n", r);  /* expected output: 0 */

r = wildcmp("main.c", "ma********************************c");
printf("%d\n", r);  /* expected output: 1 */

r = wildcmp("main.c", "*");
printf("%d\n", r);  /* expected output: 1 */

r = wildcmp("main.c", "***");
printf("%d\n", r);  /* expected output: 1 */

r = wildcmp("main.c", "m.*c");
printf("%d\n", r);  /* expected output: 1 */

r = wildcmp("main.c", "**.*c");
printf("%d\n", r);  /* expected output: 1 */

r = wildcmp("main-main.c", "ma*in.c");
printf("%d\n", r);

return 0;
}
