#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @x: integer
 * Return: value of last digit 
 */
int print_last_digit(int x)
{
int last_digit = x % 10;

if (x < 0)
{
last_digit = last_digit * -1;
}
_putchar(last_digit + '0');
return (last_digit);
}
