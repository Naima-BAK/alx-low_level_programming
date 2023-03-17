#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main - prints exactly numbers in base 16,
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
char c;

for (n = 0; n < 10; n++)
{
putchar(n + '0');
}
for (c = 'a'; c <= 'f'; c++)
{
putchar(c);
}
printf("\n");
return (0);
}
