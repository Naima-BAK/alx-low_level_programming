#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 *
 * @n: integer (number of arguments)
 * Return: 0 or sum.
 */

int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i;
va_list numbers;
va_start(numbers, n);

if (n == 0)
{
return (0);
}
else
{
for (i = 0; i < n; i++)
{
int s = va_arg(numbers, int);
sum += s;
}
}
va_end(numbers);

return (sum);
}
