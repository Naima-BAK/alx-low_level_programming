
#include <stdio.h>
/**
 *  main - prints the first 50 Fibonacci numbers,
 *  Return: Always  (Success)
 */
int main(void)
{
int i;
unsigned long int n1, n2, m1, m2, max, k1, k2, k3;
n1 = 0;
m1 = 1;
n2 = 0;
m2 = 2;
max = 10000000000;
printf("%lu, %lu, ", m1, m2);
for (i = 2; i < 98; i++)
{
if (m1 + m2 > max || n2 > 0 || n1 > 0)
{
k1 = (m1 + m2) / max;
k2 = (m1 + m2) % max;
k3 = n1 + n2 + k1;
n1 = n2, n2 = k3;
m1 = m2, m2 = k2;
printf("%lu,%lu", n2, m2);
}
else
{
k2 = m1 + m2;
m1 = m2, m2 = k2;
printf("%lu", m2);
}
if (i != 97)
printf(", ");
}
printf("\n");
return (0);
}
