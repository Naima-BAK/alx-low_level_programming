#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - a function that returns the sum of all its parameters.
 *
 * @n: integer (number of arguments)
 * @separator: string to be printed between numbers.
 * Return: numbers.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list numbers;
va_start(numbers, n);

if (separator == NULL)
{
separator = "";
}

for (i = 0; i < n; i++)
{
printf("%d", va_arg(numbers, int));
if (i < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(numbers);
}
