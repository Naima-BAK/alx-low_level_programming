#include <stdio.h>

/**
 * main -  the program prints a[2] = 98
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int a[5];
int *p = &n;

a[2] = 1024;
*(p + 5) = 98;
printf("a[2] = %d\n", a[2]);
return (0);
}
