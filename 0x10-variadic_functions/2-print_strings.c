#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - a function that prints strings, followed by a new line.
 *
 * @n: integer (number of arguments)
 * @separator: string to be printed between strings.
 * Return: nil or strings.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
char *s;
unsigned int i;
va_list strings;
va_start(strings, n);

if (separator == NULL)
{
separator = "";
}
for (i = 0; i < n; i++)
{
s = va_arg(strings, char *);

if (s == NULL)
{
printf("(nil)");
}
else
{
printf("%s", s);
}

if (i < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(strings);
}
