#include <stdio.h>

/**
  * main - prints its name, followed by a new line.
  * @argc : integer
  * @argv : string
  * Return: Always 0 (Success)
  */

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
