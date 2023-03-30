#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 *
 * @s: string
 * Return: address
 */
char *rot13(char *s)
{
int i, j;
char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char replacedBy[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

for (i = 0; *(s + i); i++)
{
for (j = 0; j < 52; j++)
{
if (letters[j] == *(s + i))
{
*(s + i) = replacedBy[j];
break;
}
}
}
return (s);
}
