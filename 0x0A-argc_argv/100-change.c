#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints the minimum number of coins to make change...
  * @argc : integer
  * @argv : string
  * Return: Always 0 (Success)
  */

int main(int argc, char *argv[])
{
int number, i, change;
int coins[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
number = atoi(argv[1]);
change = 0;
if (number < 0)
{
printf("0\n");
return (0);
}

for (i = 0; i < 5 && number >= 0; i++)
{
while (number >= coins[i])
{
change++;
number -= coins[i];
}
}
printf("%d\n", change);
return (0);
}
