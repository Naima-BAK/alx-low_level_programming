#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program that generates random valid
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x, s, y;
int password[100];
s = 0;
srand(time(NULL));
for (x = 0; x < 100; x++)
{
password[x] = rand() % 78;
s += (password[x] + '0');
putchar(password[x] + '0');
if ((2772 - s) -'0' < 78)
{
y = 2772 - s - '0';
s += y;
putchar(y + '0');
break;
}
}
return (0);
}
