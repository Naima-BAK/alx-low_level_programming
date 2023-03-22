
#include <stdio.h>
/**
 *  main - prints the first 50 Fibonacci numbers,
 *  Return: Always  (Success)
 */
int main(void)
{
int a, b, i, sum;
a = 0;
b = 1;
i = 0;
sum = 0;

while (i < 4000000)
{
i = a + b;
a = b;
b = i;
if (i % 2 == 0)
sum = sum + i;
}
printf("%d\n", sum);
return (0);
}
