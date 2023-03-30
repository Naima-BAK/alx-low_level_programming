#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @s: string to encode
 * Return: address
 */
char *leet(char *s)
{
int i, j;
char letters[] = "aAeEoOtTlL";
char replacedBy[] = "4433007711";

for (i = 0; *(s + i); i++)
{
for (j = 0; j < 10; j++)
{
if (letters[j] == s[i])
s[i] = replacedBy[j];
}
}
return (s);
}
