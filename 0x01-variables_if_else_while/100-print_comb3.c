#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main - prints exactly numbers,
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
if (i != j)
{
putchar((i % 10) + '0');
putchar((j % 10) + '0');
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
