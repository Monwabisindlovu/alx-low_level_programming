#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: First number
 * @n2: Second number
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 *
 * Return: Pointer to the result, or 0 if the result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = 0, len2 = 0, i, j, k, sum = 0, carry = 0;

/* Calculate the lengths of n1 and n2 */
while (n1[len1] != '\0')
len1++;
while (n2[len2] != '\0')
len2++;

/* Check if the result can fit in r */
if (len1 + 1 > size_r || len2 + 1 > size_r)
return (0);

/* Add the numbers digit by digit */
for (i = len1 - 1, j = len2 - 1, k = 0; i >= 0 || j >= 0 || carry; i--, j--, k++)
{
sum = carry;
if (i >= 0)
sum += n1[i] - '0';
if (j >= 0)
sum += n2[j] - '0';
carry = sum / 10;
r[k] = sum % 10 + '0';
}

/* Reverse the result */
for (i = 0, j = k - 1; i < j; i++, j--)
{
sum = r[i];
r[i] = r[j];
r[j] = sum;
}

/* Add null terminator */
r[k] = '\0';

/* Return the result */
return (r);
}
