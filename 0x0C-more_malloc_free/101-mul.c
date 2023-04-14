#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * is_digit - checks if a string composed of digits
 *
 * @s: string
 *
 * Return: 0 or 1.
 */
int is_digit(char *s)
{
int i = 0;
while (s[i])
{
if (s[i] < '0' || s[i] > '9')
{
return (0);
}
i++;
}
return (1);
}
/**
 * _strlen - returns the length of a string
 *
 * @s: string.
 *
 * Return: integer.
 */
int _strlen(char *s)
{
int size = 0;
while (s[size] != '\0')
{
size++;
}
return (size);
}
/**
 * errors - return all errors and exit
 */
void errors(void)
{
printf("Error\n");
exit(98);
}
/**
 * main - multiplies two positive numbers
 *
 * @argc: integer (length)
 * @argv: string (array)
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
char *s1, *s2;
int size1, size2, size, i, j, a, digit_1, digit_2, *mul;
a = 0;
s1 = argv[1], s2 = argv[2];
if (argc != 3 || !is_digit(s1) || !is_digit(s2))
errors();
size1 = _strlen(s1);
size2 = _strlen(s2);
size = size1 + size2 + 1;
mul = malloc(sizeof(int) * size);
if (!mul)
return (1);
for (i = 0; i <= size1 + size2; i++)
mul[i] = 0;
for (size1 = size1 - 1; size1 >= 0; size1--)
{
digit_1 = s1[size1] - '0';
j = 0;
for (size2 = _strlen(s2) - 1; size2 >= 0; size2--)
{
digit_2 = s2[size2] - '0';
j += (digit_1 *digit_2) +mul[size1 + size2 + 1];
mul[size1 + size2 + 1] = j % 10;
j /= 10;
}
if (j > 0)
mul[size1 + size2 + 1] += j;
}
for (i = 0; i < size - 1; i++)
{
if (mul[i])
a = 1;
if (a)
_putchar(mul[i] + '0');
}
if (!a)
_putchar('0');
_putchar('\n');
free(mul);
return (0);
}
