#include "main.h"

/**
 * times_table - prints the 9 times table,
 */
void times_table(void)
{
int i, j, p;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
p = j * i;
if (j == 0)
{
_putchar('0');
}
else if (p <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(p + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(p / 10 + 48);
_putchar(p % 10 + 48);
}
}
_putchar('\n');
}
}
