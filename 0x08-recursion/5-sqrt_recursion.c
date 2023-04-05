#include "main.h"

/**
 * check - Finds the natural square root of an inputted number.
 * @number: integer
 * @r: integer
 *
 * Return: integer
 */
int check(int number, int r)
{
if ((r * r) == number)
{
return (r);
}
if (r == number / 2)
{
return (-1);
}

return (check(number, r + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: integer
 *
 * Return: integer
 */
int _sqrt_recursion(int n)
{
int r = 0;

if (n < 0)
{
return (-1);
}
if (n == 1)
{
return (1);
}
return (check(n, r));
}
