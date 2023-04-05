#include "main.h"

/**
 * check - Checks if a number is divisible.
 * @number: integer.
 * @divisor: integer.
 *
 * Return: integer
 */
int check(int number, int divisor)
{
if (number % divisor == 0)
{
return (0);
}
if (divisor == number / 2)
{
return (1);
}
return (check(number, divisor + 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: integer
 *
 * Return: integer
 */
int is_prime_number(int n)
{
int divisor = 2;

if (n <= 1)
{
return (0);
}
if (n >= 2 && n <= 3)
{
return (1);
}
return (check(n, divisor));
}
