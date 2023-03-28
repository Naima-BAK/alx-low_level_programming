#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string
 * @str: string
 */
void puts2(char *str)
{
int i, size;
size = strlen(str);
for (i = 0; i < size; i++)
{
if (str[i] % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
