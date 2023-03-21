#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @x: number
 * Return: value of last digit
 */
int print_last_digit(int a)
{
int ld;
ld = a % 10;
if (ld < 0)
{
ld *= -1;
}
_putchar(ld + 48);
return (ld);
}
