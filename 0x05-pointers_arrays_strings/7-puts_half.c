#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: string
 */
void puts_half(char *str)
{
int i, size, n;
size = strlen(str);
n = (size - 1) / 2;
for (i = n + 1; i < size; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
