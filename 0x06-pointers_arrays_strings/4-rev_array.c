#include "main.h"

/**
 * reverse_array -  reverses the content of an array of integers.
 * @a: array
 * @n: integer
 */
void reverse_array(int *a, int n)
{
int i, c;
for (i = n - 1; i >= n / 2; i--)
{
c = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = c;
}
}
