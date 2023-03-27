#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string.
 * @s: string
 */
void rev_string(char *s)
{
int i;
int size = 0;
while (s[size] != '\0')
{
size++;
}
for (i = size - 1; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}
