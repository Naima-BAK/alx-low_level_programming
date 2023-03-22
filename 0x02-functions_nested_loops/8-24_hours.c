#include "main.h"
/**
 * jack_bauer -  prints every minute of the day of Jack Bauer,
 */
void jack_bauer(void)
{
int h, min;
for (h = 0; h <= 23; h++)
{
for (min = 0; min <= 59; min++)
{
_putchar(h / 10 + 48);
_putchar(h % 10 + 48);
_putchar(58);
_putchar(min / 10 + 48);
_putchar(min % 10 + 48);
_putchar('\n');
}
}
}
