#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main - prints exactly the alphabets in reverse,
 * Return: Always 0 (Success)
 */
int main(void)
{
char alphabet;

for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
putchar(alphabet);
putchar('\n');
return (0);
}
