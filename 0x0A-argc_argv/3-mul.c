#include <stdio.h>
#include <stdlib.h>
/**
  * main - prints its name, followed by a new line.
  * @argc : integer
  * @argv : string
  * Return: Always 0 (Success)
  */

int main(int argc, char *argv[])
{
int i;
int m = 1;
if (argc - 1 == 0)
{
printf("Error\n");
}
else
{
for (i = 1; i < argc; i++)
{
m *= atoi(argv[i]);
}
printf("%d\n", m);
}
return (0);
}
