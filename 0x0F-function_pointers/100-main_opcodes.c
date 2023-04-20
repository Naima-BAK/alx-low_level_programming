#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes.
 * @argc: The number of arguments.
 * @argv: pointer to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int nbytes, i;
int (*adr)(int, char **) = main;
unsigned char opcode;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

nbytes = atoi(argv[1]);

if (nbytes < 0)
{
printf("Error\n");
exit(2);
}
for (i = 0; i < nbytes; i++)
{
opcode = *(unsigned char *)adr;
printf("%.2x", opcode);

if (i == nbytes - 1)
{
continue;
}
printf(" ");
adr++;
}
printf("\n");
return (0);
}
