#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */

void rev_string(char *n)
{
int i = 0;
int j = 0;
char c;

while (*(n + i) != '\0')
{
i++;
}
i--;

for (j = 0; j < i; j++, i--)
{
c = *(n + j);
*(n + j) = *(n + i);
*(n + i) = c;
}
}

/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int n = 0, m = 0, i = 0, j = 0;
int x = 0, y = 0, z = 0;

while (*(n1 + i) != '\0')
{
i++;
}
while (*(n2 + j) != '\0')
{
j++;
}
i--;
j--;
if (j >= size_r || i >= size_r)
{
return (0);
}
while (j >= 0 || i >= 0 || n == 1)
{
if (i < 0)
x = 0;
else
x = *(n1 + i) -'0';
if (j < 0)
y = 0;
else
y = *(n2 + j) -'0';
z = x + y + n;
if (z >= 10)
n = 1;
else
n = 0;
if (m >= (size_r - 1))
return (0);
*(r + m) = (z % 10) + '0';
m++;
j--;
i--;
}
if (m == size_r)
return (0);
*(r + m) = '\0';
rev_string(r);
return (r);
}
