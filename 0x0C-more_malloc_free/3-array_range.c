#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 *
 * @min: integer
 * @max: integer
 *
 * Return: NULL or a pointer.
 */

int *array_range(int min, int max)
{
int *array;
int i, size;

if (min > max)
{
return (NULL);
}
size = max - min + 1;
array = malloc(sizeof(int) * size);
if (array == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
array[i] = min++;
}

return (array);
}
