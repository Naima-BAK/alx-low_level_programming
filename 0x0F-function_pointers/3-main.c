#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints result of an operation
 * @argc: integer
 * @argv: string
 * Return: integer
 */

int main(int argc, char *argv[])
{
int (*operation_function)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

operation_function = get_op_func(argv[2]);

if (!operation_function)
{
printf("Error\n");
exit(99);
}

printf("%d\n", operation_function(atoi(argv[1]), atoi(argv[3])));
return (0);
}
