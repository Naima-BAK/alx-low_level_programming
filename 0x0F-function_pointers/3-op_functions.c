#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - sum of two numbers
 * @a: integer
 * @b: integer
 * Return: Returns result
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - difference of two numbers
 * @a: integer
 * @b: integer
 * Return: Returns result
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - product of two numbers
 * @a: integer
 * @b: integer
 * Return: Returns result
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - division of two numbers
 * @a: integer
 * @b: integer
 * Return: Returns result
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}

return (a / b);
}
/**
 * op_mod - remainder of the division of two numbers
 * @a: integer
 * @b: integer
 * Return: Returns result
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}

return (a % b);
}
