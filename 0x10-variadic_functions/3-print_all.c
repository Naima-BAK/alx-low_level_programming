#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - a function that prints anything.
 * @format: list of types of arguments passed to the function.
 * Return: return void.
 */

void print_all(const char * const format, ...)
{
int i, j;
char *s;
va_list anything;
va_start(anything, format);
i = 0;
while (format != NULL && format[i] != '\0')
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(anything, int));
j = 0;
break;
case 'i':
printf("%i", va_arg(anything, int));
j = 0;
break;
case 'f':
printf("%f", va_arg(anything, double));
j = 0;
break;
case 's':
s = va_arg(anything, char*);
if (s == NULL)
s = "(nil)";
printf("%s", s);
j = 0;
break;
default:
j = 1;
break;
}
if (format[i + 1] != '\0' && j == 0)
printf(", ");
i++;
}
printf("\n");
va_end(anything);
}
