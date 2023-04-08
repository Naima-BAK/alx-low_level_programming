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
char *ptr;
int ret;
int sum = 0;
if (argc < 2)
{
printf("0\n");
}
else
{
for (i = 1; i < argc; i++)
{
ret = strtol(argv[i], &ptr, 10);
if (*ptr)
{
printf("Error\n");
return (0);
}
else
{
sum += ret;
}
}
printf("%d\n", sum);
}
return (0);
}
