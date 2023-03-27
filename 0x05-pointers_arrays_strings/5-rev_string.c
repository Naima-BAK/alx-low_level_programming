#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverses a string.
 * @s: string
 */
void rev_string(char *s)
{
int i, size;
char c;
size = strlen(s);
for (i = 0; i < size / 2; i++)
{
c = s[i];
s[i] = s[size - i - 1];
s[size - i - 1] = c;
}
}
