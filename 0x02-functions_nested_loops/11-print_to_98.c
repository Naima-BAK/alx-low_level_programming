#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints numbers to 98
 * @number: starting integer
 *
 * Return: void
 */
void print_to_98(int number)
{
if (number < 98)
{
while (number < 98)
{
printf("%d, ", number);
number++;
}
}
else if (number > 98)
{
while (number > 98)
{
printf("%d, ", number);
number--;
}
}
printf("98\n");
}
